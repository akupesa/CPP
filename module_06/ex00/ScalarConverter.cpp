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

bool	isChar(std::string av)
{}

bool	isDig(std::string av)
{
	size_t i = 0;

	if (av[0] == '+' || av[0] == '-')
		i = 1;
	if (av.length() == i)
		return (false);
	for (; i < av.length(); ++i)
		if (!std::isdigit(static_cast<unsigned char>(av[i])))
			return (false);
	return (true);
}

int	ScalarConverter::detector(std::string av)
{
	if (isChar(av) == true)
		return (3); // Character Return
	if ((av[av.size() - 1] == 'f' || av[av.size() - 1] == 'F') && av.find('.') != std::string::npos)
		return (4); // Float Return
	if ((av[av.size() - 1] != 'f' || av[av.size() - 1] != 'F') && av.size() >= 3 && av.find('.') != std::string::npos)
		return (5); // Double Return
	if (isDig(av) == true)
		return (6); // Intenger Return
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
{
	int checker = detector(av);

	switch (checker)
	{
		case 3:
			intConverter();
			break;
		case 4:
			charConverter();
			break;
		case 5:
			floatConverter();
			break;
		case 6:
			doubleConverter();
			break;
		default:
			std::cout << "Not a valid type!\n";
			break;
	}
}
