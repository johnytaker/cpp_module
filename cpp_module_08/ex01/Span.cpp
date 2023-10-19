/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:28:41 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/18 16:54:15 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(void) : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(Span const & other) { *this = other; }

Span::~Span(void) {}

Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->vct = rhs.vct;
	}
	return *this;
}

void Span::addNumber(int value)
{
	if (vct.size() >= _N)
		throw std::range_error("storage is full");
	vct.push_back(value);
}

void Span::addNumbers(std::vector<int>::const_iterator it,
					std::vector<int>::const_iterator ite)
{
	vct.insert(vct.end(), it, ite);
	if (vct.size() > _N)
		throw std::range_error("storage is full");
}

int Span::longestSpan(void)
{
	if (vct.size() < 2)
		throw std::logic_error("not enough elements");
	std::vector<int>::iterator minIt;
	std::vector<int>::iterator maxIt;

	minIt = std::min_element(vct.begin(), vct.end());
	maxIt = std::max_element(vct.begin(), vct.end());
	return (*maxIt - *minIt);
}


int Span::shortestSpan(void)
{
	if (vct.size() < 2)
		throw std::logic_error("not enough elements");
	std::sort(vct.begin(), vct.end());
	int min = vct[1] - vct[0];
	int tmp;
	for (unsigned int i = 2; i < vct.size(); i++)
	{
		tmp = vct[i] - vct[i - 1];
		if (tmp < min)
			min = tmp;
	}
	return min;
}

static void displayValue(int const & i)
{
	std::cout << i << " ";
}

void Span::display(void)
{
	std::for_each(vct.begin(), vct.end(), displayValue);
	std::cout << std::endl;
}

