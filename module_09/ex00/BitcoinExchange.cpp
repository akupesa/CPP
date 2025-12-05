/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:07:11 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/01 14:07:12 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "Default constructor.\n";
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& be)
{
	std::cout << "Copy constructor.\n";
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& be)
{
	if (this != &be)
		*this = be;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "Destructor.\n";
}

bool	BitcoinExchange::extensionFile(std::string file) const
{
	int len = file.length();

	if (len < 4)
	{
		std::cout << "File name not supported.\n";
		return (false);
	}
	if (file.substr(len - 4) != ".txt")
	{
		std::cout << "Extension not supoorted.\n";
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::mixer(const std::string file)
{
	std::string	lines_saver;

	std::ifstream tempo(file.c_str());
	if (!tempo.is_open())
	{
		std::cout << "File not opened.\n";
		return (false);
	}
	while (getline(tempo, lines_saver))
	{
		
	}
}
