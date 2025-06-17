/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:40:34 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/17 16:27:59 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::Harl(std::string level)
{
	this->level = level;
}

Harl::~Harl(){}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::complain(std::string level)
{
	int i = 0;
	std::string	positions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*func[4](void)) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error,};
	
	this->*func[1]();
	this->*func[2]();
	this->*func[3]();
	this->*func[4]();

	if (level == positions[i])
		this->*func[i]();
}
