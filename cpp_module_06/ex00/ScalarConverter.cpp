/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:14:44 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/25 10:44:01 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(std::string const literal)
	: _literal(literal) {}

ScalarConverter::ScalarConverter(ScalarConverter const & other)
{
	*this = other;
}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	(void)rhs;
	return *this;
}

// static void castFunc(char & cr, int & ir, float & fr, double & dr)
// {

// }

static void printChar(char const & charResult)
{
	std::cout << "char: ";
	if (std::isprint(charResult))
		std::cout << charResult << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

static void printInt(int const & intResult)
{
	std::cout << "int: ";

		if (intResult > INT_MAX || intResult < INT_MIN)
			std::cout << "impossible" << std::endl;
		std::cout << intResult << std::endl;
}

static void printFloat(float const & floatResult)
{
	std::cout << "float: ";
	if (std::isnan(floatResult))
		std::cout << "nanf" << std::endl;
	else if (std::isinf(floatResult))
		std::cout << ;
	else
		std::cout << floatResult << "f";
}

static void printDouble(double const & doubleResult)
{

}

void ScalarConverter::convert(std::string const & literal)
{
	char	charResult;
	int		intResult;
	float	floatResult;
	double	doubleResult;
	char	sign;

	if (literal.length() == 1 && std::isprint(literal[0]))
	{
		charResult = literal[0];
		intResult = static_cast<int>(charResult);
		floatResult = static_cast<float>(charResult);
		doubleResult = static_cast<double>(charResult);
	}
	else
	{
		std::istringstream iss(literal);
		if (iss >> intResult)
		{
			charResult = static_cast<char>(intResult);
			floatResult = static_cast<float>(intResult);
			doubleResult = static_cast<double>(intResult);
		}
		else if (iss >> floatResult)
		{
			charResult = static_cast<char>(floatResult);
			intResult = static_cast<int>(floatResult);
			doubleResult = static_cast<double>(floatResult);
		}
		else if (literal == "nanf" || literal == "-inff" || literal == "inff")
		{

		}
		else if (iss >> doubleResult)
		{
			charResult = static_cast<char>(doubleResult);
			intResult = static_cast<int>(doubleResult);
			floatResult = static_cast<double>(doubleResult);
		}
		else
		{
			charResult = 'i';
			intResult = 0;
			floatResult = 0.0f;
			doubleResult = 0.0;
		}
	}
}

const char * ScalarConverter::NonDisplay::what() const throw()
{
	return "Non displayable";
}

const char * ScalarConverter::Impossible::what() const throw()
{
	return "impossible";
}
