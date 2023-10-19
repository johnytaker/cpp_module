/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:16:07 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/19 10:38:56 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>

static void ft_error(std::string errorType)
{
	std::cout << "Error: " << errorType << "." << std::endl;
}

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(std::string input) : _input(input)
{
	readDB();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & other) { *this = other; }

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	(void)rhs;
	return *this;
}

void BitcoinExchange::readDB(void)
{
	std::fstream fin("data.csv");
	std::string line;

	if (fin.fail())
	{
		ft_error("couldn't open CSV file");
		exit(EXIT_FAILURE);
	}
	std::getline(fin, line);
	while (!fin.eof())
	{
		std::getline(fin, line);
		fillRateMap(line);
	}
	fin.close();
}

void BitcoinExchange::printRateMap(void)
{
	std::map<std::string, float>::iterator it = _rateMap.begin();
	while (it != _rateMap.end())
	{
		std::cout << it->first << " , " << it->second << std::endl;
		++it;
	}

}
void BitcoinExchange::fillRateMap(std::string line)
{
	std::stringstream ss(line);
	std::string date, rate;

	getline(ss, date, ',');
	getline(ss, rate);
	_rateMap.insert(std::map<std::string,float>::value_type(date,atof(rate.c_str())));
}

static bool checkYear(std::string year)
{
	int y = atoi(year.c_str());
	if (y < 2009 || y > 2022)
	{
		std::cout <<
		return (false);
	}
	return (true);
}

static bool checkMonth(std::string month)
{
	int m = atoi(month.c_str());
	if (m < 1 || m > 12)
	{
		ft_error("month out of range");
		return (false);
	}
	return (true);
}

static bool checkDay(std::string day)
{
	int d = atoi(day.c_str());
	if (d < 1 || d > 31)
	{
		ft_error("day out of range");
		return (false);
	}
	return (true);
}

bool BitcoinExchange::checkDate(std::string date)
{

}

