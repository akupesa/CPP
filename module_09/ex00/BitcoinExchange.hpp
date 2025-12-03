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
# include <fstream>
# include <iostream>
# include <exception>


class BitcoinExchange
{
	private:
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& be);
		BitcoinExchange& operator=(const BitcoinExchange& be);
		~BitcoinExchange();

		void	checkerFile(const std::string file);
		void	fileValidator(const std::string file);
		void	saverData(const std::string file);
		void	sintaxe(const std::string file);
};

#endif // BITCOINEXCHANGE_HPP
