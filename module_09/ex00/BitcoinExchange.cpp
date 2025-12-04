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

int	BitcoinExchange::ExtensionFile(std::string file)
{
	int len = file.length();

	if (len < 4)
	{
		std::cout << "File name not supported.\n";
		return (1);
	}
	if (file[len - 4] != '.' || file[len - 3] != 'c' || file[len - 2] != 's' || file[len - 1] != 'v')
	{
		std::cout << "Extension not supoorted.\n";
		return (1);
	}
	return (0);
}

bool	BitcoinExchange::fileValidator(const std::string file)
{
	std::ifstream tempo(file.c_str());
	if (!tempo.is_open())
	{
		std::cout << "File not opened.\n";
		return (false);
	}
	return (true);
}

void	BitcoinExchange::saverData(const std::string file)
{

}
