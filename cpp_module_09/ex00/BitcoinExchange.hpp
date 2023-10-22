/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:04:39 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/22 10:14:40 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(std::string const & dbFile);
		BitcoinExchange(BitcoinExchange const & other);
		~BitcoinExchange(void);

		BitcoinExchange & operator=(BitcoinExchange const & rhs);

		float getExchangeRate(std::string const & date, float value) const;

		// class RuntimeErrorException : public std::exception
		// {
		// 	public:
		// 		const char* what() const throw();
		// };
		// class InvalidArgumentException : public std::exception
		// {
		// 	public:
		// 		const char* what() const throw();
		// };
		// class NegativeValueException : public std::exception
		// {
		// 	public:
		// 		const char* what() const throw();
		// };
		// class TooLargeNumberException : public std::exception
		// {
		// 	public:
		// 		const char* what() const throw();
		// };
		// class InexistentDateException : public std::exception
		// {
		// 	public:
		// 		const char* what() const throw();
		// };

	private:
		bool _isValidDate(std::string const & date) const;
		std::map<std::string, float> _rateMap;
		BitcoinExchange(void);
};

std::ostream & operator<<(std::ostream & os, BitcoinExchange const & i);


#endif
