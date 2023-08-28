/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:54:42 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/26 10:09:59 by iugolin          ###   ########.fr       */
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
		~Fixed();

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed & operator=(Fixed const & rhs);

		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		Fixed & operator+(Fixed const & rhs);
		Fixed & operator-(Fixed const & rhs);
		Fixed & operator*(Fixed const & rhs);
		Fixed & operator/(Fixed const & rhs);

		Fixed operator++(int);
		Fixed & operator++(void);
		Fixed operator--(int);
		Fixed & operator--(void);

		static Fixed & min(Fixed & left, Fixed & right);
		static const Fixed & min(Fixed const & left, Fixed const & right);
		static Fixed & max(Fixed & left, Fixed & right);
		static const Fixed & max(Fixed const & left, Fixed const & right);

	private:
		int fixedPoint;
		static const int fractionalBits = 8;
};

std::ostream & operator<<(std::ostream & os, Fixed const & i);

#endif
