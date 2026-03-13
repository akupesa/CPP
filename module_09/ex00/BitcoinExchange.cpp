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
	(void)be;
	std::cout << "Copy constructor.\n";
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& be)
{
	(void)be;
	if (this != &be)
		*this = be;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "Destructor.\n";
}

bool	BitcoinExchange::fileType(std::string file) const
{
	int len = file.length();

	if (len < 4)
	{
		std::cout << "File not supported.\n";
		return (false);
	}
	std::string ext = file.substr(len - 4);
	if (ext != ".txt" && ext != ".csv")
	{
		std::cout << "Extension not supported.\n";
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::loadDatabase(const std::string& csvfile)
{
	char		*end;
	std::string	line;
	std::ifstream	file(csvfile.c_str());
	if (!file.is_open())
	{
		std::cout << "Database file not opened.\n";
		return (false);
	}
	while (getline(file, line))
	{
		size_t		pos;
		std::string	date;
		float		price;
		
		pos = line.find(',');
		if (pos == std::string::npos)
			continue ;
		date = line.substr(0, pos);
		price = strtof(line.substr(pos + 1).c_str(), &end);
		this->database[date] = price;
	}
	return (true);
}

std::string and_trim(const std::string& str)
{
	size_t	first;
	size_t	last;

	first = str.find_first_not_of(" \t");
	if (first == std::string::npos)
		return ("");
	last = str.find_last_not_of(" \t");
	return (str.substr(first, last - first + 1));
}

bool	bissexto(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return (true);
	return (false);
}

float	BitcoinExchange::getBitcoinPrice(const std::string& date_str) const
{
	std::map<std::string, float>::const_iterator ite = this->database.lower_bound(date_str);

	if (ite == this->database.begin() && (ite == this->database.end() || ite->first > date_str))
		throw std::runtime_error("Error: no exchange rate available for the selected date");

	if (ite == this->database.end())
	{
		--ite;
		return (ite->second);
	}
	if (ite->first > date_str)
		--ite;
	return (ite->second);
}

void	BitcoinExchange::lineReader(const std::string& inputFile)
{
	bool		first;
	std::string	lines_saver;
	std::ifstream 	file(inputFile.c_str());

	if (!file.is_open())
	{
		std::cout << "File not opened.\n";
		return ;
	}
	first = true;
	while (getline(file, lines_saver))
	{
		size_t 	pos;
		size_t	pos_pipe;
		size_t	pos_comma;
		std::string date_str;
		std::string value_str;

		if (first)
		{
			first = false;
			if (lines_saver.find("date | value") != std::string::npos ||
				lines_saver.find("date,rate") != std::string::npos ||
					lines_saver.find("date,exchange_rate"))
				continue;
		}
		if (lines_saver.empty())
			continue;
		
		pos_pipe = lines_saver.find('|');
		pos_comma = lines_saver.find(',');
		if (pos_pipe == std::string::npos && pos_comma == std::string::npos)
		{
			std::cout << "Error: bad input => " << lines_saver << std::endl;
			continue ;
		}
		else if (pos_pipe == std::string::npos)
			pos = pos_comma;
		else if (pos_comma == std::string::npos)
			pos = pos_pipe;
		else
			pos = std::min(pos_pipe, pos_comma);

		date_str = and_trim(lines_saver.substr(0, pos));
		value_str = and_trim(lines_saver.substr(pos + 1));
		if (date_str.length() != 10 || date_str[4] != '-' || date_str[7] != '-')
		{
			std::cout << "Error: bad input => " << lines_saver << std::endl;
			continue;
		}

		int year, month, day, max_day;
		
		year = atoi(date_str.substr(0, 4).c_str());
		month = atoi(date_str.substr(5, 2).c_str());
		day = atoi(date_str.substr(8, 2).c_str());
	
		if (month < 1 || month > 12)
		{
			std::cout << "Error: bad input => " << lines_saver << std::endl;
			continue;
		}
		
		if (month == 2)
		{
			if (bissexto(year))
				max_day = 29;
			else
				max_day = 28;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			max_day = 30;
		else
			max_day = 31;

		if (day < 1 || day > max_day)
		{
			std::cout << "Error: bad input => " << lines_saver << std::endl;
			continue;
		}

		char* end;
		float value;
		value = strtof(value_str.c_str(), &end);
		if (end == value_str.c_str() || *end != '\0')
		{
			std::cout << "Error: bad input => " << lines_saver << std::endl;
			continue;
		}
		if (value < 0)
		{
			std::cout << "Error: not a positive number.\n";
			continue;
		}
		if (value > 1000)
		{
			std::cout << "Error: number too large.\n";
			continue;
		}
		try
		{
			float bitcoin_price = getBitcoinPrice(date_str);
			float result = value * bitcoin_price;
			std::cout << date_str << " => " << value << " = " << result << '\n';
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
			continue;
		}
	}	
}


