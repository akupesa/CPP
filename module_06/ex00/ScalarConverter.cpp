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

int	ScalarConverter::detector(std::string av)
{}

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
