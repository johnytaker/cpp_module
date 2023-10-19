/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:04:39 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/18 21:27:34 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		BitcoinExchange(std::string input);
		BitcoinExchange(BitcoinExchange const & other);
		~BitcoinExchange(void);

		BitcoinExchange & operator=(BitcoinExchange const & rhs);

		void readDB(void);
		void printRateMap(void);
		void fillRateMap(std::string line);
		bool checkDate(std::string date);

	private:
		std::string _input;
		std::map<std::string, float> _rateMap;
};
#endif
