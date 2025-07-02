/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:57:20 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/18 15:38:02 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n"
		<< "I cannot believe adding extra bacon costs more money.\n"
		<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free.\n"
		<< "I've been coming for years, whereas you started working here just last month.\n"
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n"
		<< "This is unacceptable! I want to speak to the manager now.\n"
		<< std::endl;
}

void	Harl::complain(std::string level)
{
	const std::string	positions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int i;
	i = -1;
	while (++i < 4)
		if (level == positions[i])
			break;
	switch (i) 
	{
		case 0:
			for (int i = 0; i < 4; i++)
				(this->*func[i])();
			break;
		case 1:
			for (int i = 1; i < 4; i++)
				(this->*func[i])();
			break;
		case 2:
			for (int i = 2; i < 4; i++)
				(this->*func[i])();
			break;
		case 3:
			for (int i = 3; i < 4; i++)
				(this->*func[i])();
			break;
		default:
			std::cout << "No an existent value!\n";
			break;
	}
}
