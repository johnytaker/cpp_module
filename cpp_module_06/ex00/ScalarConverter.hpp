/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:54:24 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/25 10:40:21 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <cmath>

# define PLUS_INF	(1.0f/0.0f)
# define MINUS_INF	(-1.0f/0.0f)
# define NAN		(0.0f/0.0f)

class ScalarConverter
{
	public:
		ScalarConverter(std::string const literal);
		ScalarConverter(ScalarConverter const & other);
		~ScalarConverter(void);

		ScalarConverter & operator=(ScalarConverter const & rhs);

		static void convert(std::string const & literal);

	private:
		ScalarConverter(void);
		std::string const _literal;
};

#endif
