/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:54:42 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/24 20:35:06 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(int const num);
		Fixed(float const num);
		Fixed(Fixed const & other);
		Fixed & operator=(Fixed const & other);
		~Fixed();

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int fixedPoint;
		static const int fractionalBits = 8;
};

std::ostream & operator<<(std::ostream & os, Fixed const & i);

#endif


