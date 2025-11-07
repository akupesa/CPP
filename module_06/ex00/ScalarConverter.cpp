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
#include <cmath>


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
	if (av.length() != 1)
		return (false);
	unsigned char c = static_cast<unsigned char>(av[0]);
	if (std::isprint(c) && !std::isdigit(c))
		return (true);
	return (false);
}

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

int	detector(std::string av)
{
	if (isChar(av) == true)
		return (3); // Character Return
	else if ((av[av.size() - 1] == 'f' || av[av.size() - 1] == 'F') && av.find('.') != std::string::npos)
		return (4); // Float Return
	else if ((av[av.size() - 1] != 'f' || av[av.size() - 1] != 'F') && av.find('.') != std::string::npos && av.size() >= 3 && !isDig(av))
		return (5); // Double Return
	else if (isDig(av) == true)
		return (6); // Integer Return
	else if (av == "nan" || av == "nanf" || av == "+nan" || av == "+nanf")
		return (7); // NAN Return
	else if (av == "-nan" || av == "-nanf")
		return (8); //-NAN Return
	else if (av == "inf" || av == "inff" || av == "+inf" || av == "+inff")
		return (9);
	else if (av == "-inf" || av == "-inff")
		return (10);
	return (0);
}

void	high_poss(int checker)
{
	if (checker == 7)
	{
		std::cout << "char: Impossible\n"
			<< "int: Impossible\n"
			<< "float: nanf\n"
			<< "double: nan\n";
	}
	if (checker == 8)
	{
		std::cout << "char: Impossible\n"
			<< "int: Impossible\n"
			<< "float: -nanf\n"
			<< "double: -nan\n";
	}
	if (checker == 9)
	{
		std::cout << "char: Impossible\n"
			<< "int: Impossible\n"
			<< "float: inff\n"
			<< "double: inf\n";
	}
	if (checker == 10)
	{
		std::cout << "char: Impossible\n"
			<< "int: Impossible\n"
			<< "float: -inff\n"
			<< "double: -inf\n";
	}
}

void	intConverter(std::string av)
{
	char	*end;
	bool	sign = false;
	long	temp = std::strtol(av.c_str(), &end, 10);

	if (*end != '\0')
		sign = true;
	// CHAR
	if (sign || temp < 0 || temp > 126)
		std::cout << "char: Impossible.\n";
	else if (!std::isprint(static_cast<char>(temp)))
		std::cout << "char: No displayble.\n";
	else
		std::cout << "char: '" << static_cast<char>(temp) << "'\n";
	
	// INT
	if (sign || temp < std::numeric_limits<int>::min() || temp > std::numeric_limits<int>::max() || std::isnan(temp))
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << temp << std::endl;
	
	// FLOAT
	if (sign)
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(temp) << "f\n";

	// DOUBLE
	if (sign)
		std::cout << "double: Impossible\n";
	else
		std::cout << "double: " << static_cast<double>(temp) << std::endl;	
}

void	charConverter(std::string av)
{
	char c = static_cast<char>(av[0]);
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f\n";
	std::cout << "double: "<< static_cast<double>(c) << std::endl;
}

void	floatConverter(std::string av)
{
	char		*end;
	bool		sign = false;
	std::string 	remF = av.substr(0, av.size() - 1);
	float 		temp = std::strtof(remF.c_str(), &end);

	if (*end != '\0')
		sign = true;
	int paraINt = static_cast<int>(temp);
	// CHAR	
	if (sign || temp < 0 || temp > 126)
		std::cout << "char: Impossible.\n";
	else if (!std::isprint(static_cast<char>(temp)))
		std::cout << "char: No displayble.\n";
	else
		std::cout << "char: '" << static_cast<char>(temp) << "'\n";
	
	// INT
	if (sign || paraINt < F_INT_MIN || paraINt > F_INT_MAX || std::isnan(temp))
	{
		/*long longer = static_cast<long>(temp);
		if (longer <= temp || longer >= temp)*/
		std::cout << "int: Impossible\n";
	}
	else
		std::cout << "int: " << static_cast<int>(temp) << std::endl;
	
	// FLOAT
	if (sign)
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(temp) << "f\n";

	// DOUBLE
	if (sign)
		std::cout << "double: Impossible\n";
	else
		std::cout << "double: " << static_cast<double>(temp) << std::endl;

}

void	doubleConverter(std::string av)
{
	char	*end;
	bool	sign = false;
	long	temp = std::strtod(av.c_str(), &end);
	
	if (*end != '\0')
		sign = true;
	// CHAR
	if (sign || temp < 0 || temp > 126)
		std::cout << "char: Impossible.\n";
	else if (!std::isprint(static_cast<char>(temp)))
		std::cout << "char: No displayble.\n";
	else
		std::cout << "char: '" << static_cast<char>(temp) << "'\n";
	
	// INT
	if (sign || temp < std::numeric_limits<int>::min() || temp > std::numeric_limits<int>::max() || std::isnan(temp))
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << temp << std::endl;
	
	// FLOAT
	if (sign)
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(temp) << "f\n";

	// DOUBLE
	if (sign)
		std::cout << "double: Impossible\n";
	else
		std::cout << "double: " << static_cast<double>(temp) << std::endl;	
}

void	ScalarConverter::convert(std::string av)
{
	int checker = detector(av);

	switch (checker)
	{
		case 3:
			charConverter(av);
			break;
		case 4:
			floatConverter(av);
			break;
		case 5:
			doubleConverter(av);
			break;
		case 6:
			intConverter(av);
			break;
		case 7:
			high_poss(checker);
			break;
		case 8:
			high_poss(checker);
			break;
		case 9:
			high_poss(checker);
			break;
		case 10:
			high_poss(checker);
			break;
		default:
			std::cout << "Not a valid type!\n";
			break;
	}
}
