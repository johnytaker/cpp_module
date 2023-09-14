/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:54:42 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/13 11:07:51 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const & other);
		Fixed & operator=(Fixed const & other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int fixedPointNum;
		static const int numFractBits = 8;
};


#endif
