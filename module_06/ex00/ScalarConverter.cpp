/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:01:10 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/24 15:52:11 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor.\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter& sc)
{
	(void)sc;
	std::cout << "Copy constructor.\n";
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& sc)
{
	(void)sc;
	std::cout << "Copy assignment operator.\n";
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor.\n";
}

bool	isChar(std::string av)
{
	int i = 0;

	if (av.length() == 1 && av[i] >= 'a' && av[i] <= 'z' || av[i] >= 'A' && av[i] <= 'Z')
		return (true);
	return (false);
}

int	ScalarConverter::detector(std::string av)
{
	if (isChar(av) == true)
		return (3);
	for (int i = -1; i < av.length(); ++i)
		if (av.length() > 1 && av[i] == '.' && av[i + 1] == 'f')
			return (4);
	for (int j = 0; j < av.length(); j++)
		if (av[j] == '.' && av.length() >= 3)
			return (5);
	return (0);
}

void	ScalarConverter::intConverter()
{}

void	ScalarConverter::charConverter()
{}

void	ScalarConverter::floatConverter()
{}

void	ScalarConverter::doubleConverter()
{}

void	ScalarConverter::convert(std::string av)
{}
