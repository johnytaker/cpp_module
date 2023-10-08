/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:06:26 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/07 20:14:43 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define APPAY_HPP

# include <iostream>

template<class T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array<T> const & other);
		~Array(void);

		Array<T> & operator=(Array<T> const & rhs);
		T & operator[](unsigned int const index) const;

		int size(void) const;
	private:
		T * arr;
		unsigned int _n;
};

# include "Array.tpp"

#endif
