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

int	BitcoinExchange::ExtensionFile(const std::string file)
{
	int len = file.size();

	if (len < 4)
	{
		std::cout << "File name not supported.\n";
		return (1);
	}
	if (file[len - 4] == "." && file[len - 3] == "c" && file[len - 2] == "s" && file[len - 1] == "v")
		return ;
	else
	{
		std::cout << "Extension not supoorted.\n";
		return (1);
	}
	
}
