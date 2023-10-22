/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:39:51 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/22 00:35:09 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : _size(0), _sorted(false) {}

PmergeMe::PmergeMe(int ac, char **av) : _size(ac - 1), _sorted(false)
{
	_vector = _parseArgsVector(ac, av);
	_verifyDuplicates();
	_deque = _parseArgsDeque(ac, av);

	_printBeforeAfter();

	double tBegin = _getTime();
	_mergeInsertSort(_vector);
	_deltaTimeVector = _deltaTime(tBegin);

	tBegin = _getTime();
	_mergeInsertSort(_deque);
	_deltaTimeDeque = _deltaTime(tBegin);

	_sorted = true;
	_printBeforeAfter();

	_printTime("vector");
	_printTime("deque");
}

PmergeMe::PmergeMe(PmergeMe const & other) { *this = other; }

PmergeMe::~PmergeMe(void) {}

PmergeMe &	PmergeMe::operator=(PmergeMe const & rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs._size;
		this->_sorted = rhs._sorted;
		this->_vector = rhs._vector;
		this->_deque = rhs._deque;
		this->_deltaTimeVector = rhs._deltaTimeVector;
		this->_deltaTimeDeque = rhs._deltaTimeDeque;
	}
	return (*this);
}

double	PmergeMe::getVectorDeltaTime(void) const
{
	return (this->_deltaTimeVector);
}
double	PmergeMe::getDequeDeltaTime(void) const
{
	return (this->_deltaTimeDeque);
}

std::vector<int> PmergeMe::_parseArgsVector(int ac, char **av)
{
	std::vector<int> args;
	for (int i = 1; i < ac; ++i)
	{
		std::string arg = av[i];
		int value = atoi(arg.c_str());
		if (value <= 0)
			throw InvalidArgumentException();
		args.push_back(value);
	}
	return (args);
}

std::deque<int> PmergeMe::_parseArgsDeque(int ac, char **av)
{
	std::deque<int> args;
	for (int i = 1; i < ac; ++i)
	{
		std::string arg = av[i];
		int value = atoi(arg.c_str());
		if (value <= 0)
			throw InvalidArgumentException();
		args.push_back(value);
	}
	return (args);

}

void PmergeMe::_verifyDuplicates(void)
{
	std::set<int> numSet;
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); ++it)
	{
		int num = *it;
		if (numSet.find(num) != numSet.end())
			throw DuplicatesException();
		numSet.insert(num);
	}
}

void PmergeMe::_printBeforeAfter(void)
{
	if (_sorted == false)
		std::cout << "Before: ";
	else
		std::cout << "After:  ";
	std::vector<int>::iterator it = _vector.begin();
	std::vector<int>::iterator ite = _vector.end();
	while (it != ite)
	{
		std::cout << " " << *it;
		++it;
	}
	std::cout << std::endl;
}

void PmergeMe::_printTime(std::string vectorDeque) const
{
	double delta;
	if (vectorDeque == "vector")
		delta = _deltaTimeVector;
	else if (vectorDeque == "deque")
		delta = _deltaTimeDeque;
	else
		throw ContainerTypeException();
	std::cout << "Time to process a range of " << _size
		<< " elements with std::" << vectorDeque << ": "
		<< std::fixed << std::setprecision(5) << delta << " ms" << std::endl;
}

template <typename T>
void PmergeMe::_mergeInsertSort(T & container)
{
	const int limit = 16;
	const int size = container.size();
	if (size < 2)
		return ;
	if (size < limit)
	{
		for (typename T::iterator i = container.begin(); i != container.end(); ++i)
		{
			typename T::iterator j = i;
			while (j != container.begin() && *(j - 1) > *j)
			{
				std::swap(*j, *(j - 1));
				--j;
			}
		}
		return ;
	}
	typename T::iterator middle = container.begin() + size / 2;
	T left(container.begin(), middle);
	T right(middle, container.end());
	_mergeInsertSort(left);
	_mergeInsertSort(right);
	typename T::iterator i = left.begin();
	typename T::iterator j = right.begin();
	typename T::iterator k = container.begin();
	while (i != left.end() && j != right.end())
	{
		if (*i < *j)
		{
			*k = *i;
			++i;
		}
		else
		{
			*k = *j;
			++j;
		}
		++k;
	}
	while (i != left.end())
	{
		*k = *i;
		++i;
		++k;
	}
	while (j != right.end())
	{
		*k = *j;
		++j;
		++k;
	}
}

double PmergeMe::_getTime(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec * 0.001));
}
double PmergeMe::_deltaTime(long long time)
{
	if (time > 0)
		return (_getTime() - time);
	return (0);
}

const char* PmergeMe::InvalidArgumentException::what() const throw()
{
	return ("Error: invalid argument");
}

const char* PmergeMe::DuplicatesException::what() const throw()
{
	return ("Error: duplicates are forbidden");
}

const char* PmergeMe::ContainerTypeException::what() const throw()
{
	return ("Error: container choosen to print is not vector or deque");
}

std::ostream &	operator<<(std::ostream & os, PmergeMe const & i)
{
	os << "Vector delta time: " << i.getVectorDeltaTime() << std::endl
		<< "Deque delta time: " << i.getDequeDeltaTime();
	return os;
}
