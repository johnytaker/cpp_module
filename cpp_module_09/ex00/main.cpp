/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:38:45 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/22 10:20:39 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}
	std::ifstream inputFile(av[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: couldn't open input file" << std::endl;
		return (1);
	}
	BitcoinExchange exchange("data.csv");
	std::string line;
	getline(inputFile, line);
	while (getline(inputFile, line))
	{
		std::stringstream ss(line);
		std::string date;
		float value;
		if (getline(ss, date, '|') && ss >> value)
		{
			date.erase(0, date.find_first_not_of(" \t\n\r\f\v"));
			date.erase(date.find_last_not_of(" \t\n\r\f\v") + 1);
			try
			{
				float exchangeRate = exchange.getExchangeRate(date, value);
				float result = value * exchangeRate;
				std::cout << date << " => " << value << " = " << result << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		else
			std::cerr << "Error: bad input => " << line << std::endl;
	}
	return (0);
}
