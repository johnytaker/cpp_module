/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:54:24 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/04 17:38:11 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <cmath>
# include <iomanip>

# define PLUS_INF	(1.0f/0.0f)
# define MINUS_INF	(-1.0f/0.0f)
# define NANF		(0.0f/0.0f)

class ScalarConverter
{
	public:
		static void convert(std::string const & literal);
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & other);
		ScalarConverter & operator=(ScalarConverter const & rhs);
		~ScalarConverter(void);
};

#endif
