/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:21:29 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/07 16:42:57 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <ostream>

ClapTrap::ClapTrap(std::string Name)
{
	std::string << "Default constructor called!" << std::endl;
	this->Name = Name;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	this->Name = clap.Name;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clap)
{
	if (this != &clap)
		this->Name = clap.Name;
	std::cout << "Copy assignment constructor called!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!" << std::endl;
}

std::ostream&	operator=(std::ostream clap, const ClapTrap& ClapObj)
{
	clap << ClapObj;
	return (clap);
}
