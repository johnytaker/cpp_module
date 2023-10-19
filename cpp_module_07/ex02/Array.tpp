/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:24:50 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/11 17:49:31 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<class T>
Array<T>::Array(void) : arr(new T[0]()), _n(0)
{
	std::cout << "Zero constructor called" << std::endl;
}

template<class T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Size constructor called" << std::endl;
	if (this->_n == 0)
		this->arr = NULL;
	else
		this->arr = new T[n]();
	this->_n = n;
}

template<class T>
Array<T>::Array(Array<T> const & other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
	{
		this->_n = other.size();
		this->arr = new T[_n]();
		for (unsigned int i = 0; i < this->_n; i++)
			this->arr[i] = other[i];
	}
}

template<class T>
Array<T>::~Array(void)
{
	if (this->arr)
		delete [](this->arr);
}

template<class T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
	if (this == &rhs)
		return (*this);
	if (this->arr)
		delete [](this->arr);
	this->_n = rhs.size();
	this->arr = new T[_n]();
	for (unsigned int i = 0; i < this->_n; i++)
		this->arr[i] = rhs[i];
	return (*this);
}

template<class T>
T & Array<T>::operator[](unsigned int const index) const
{
	if (index < 0 || index >= this->_n)
		throw std::range_error("Index out of bounds");
	return (this->arr[index]);
}

template<class T>
int const &  Array<T>::size(void) const
{
	return (this->_n);
}

#endif
