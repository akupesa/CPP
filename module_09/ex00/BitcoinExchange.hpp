/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:07:14 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/01 14:07:15 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <exception>


class BitcoinExchange
{
	private:
		std::map<std::string, float> database;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& be);
		BitcoinExchange& operator=(const BitcoinExchange& be);
		~BitcoinExchange();

		bool	fileType(const std::string file) const;
		bool	loadDatabase(const std::string& csvfile);		// leitura do .csv e adicionamos ao std::map
		void	lineReader(const std::string& inputFile);		// lemos linha por linha do .txt
		float	getBitcoinPrice(const std::string& date_str) const;	// procuramos o valor no mapa
};

#endif // BITCOINEXCHANGE_HPP
