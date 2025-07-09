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

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->clapName = Name;
	HitPoint = 10;
	AttackDamage = 0;
	EnergyPoints = 10;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	this->clapName = clap.clapName;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clap)
{
	if (this != &clap)
		this->clapName = clap.clapName;
	std::cout << "Copy assignment constructor called!" << std::endl;
	return (*this);
}

ClapTrap	ClapTrap::operator-(const ClapTrap& clap)
{
	ClapTrap	obj;

	obj.HitPoint = this->HitPoint - clap.HitPoint;
	obj.AttackDamage = this->AttackDamage - clap.AttackDamage;
	obj.EnergyPoints = this->EnergyPoints - clap.EnergyPoints;
	return (obj);
}

ClapTrap&	ClapTrap::operator++()
{
	this->HitPoint++;
	this->AttackDamage++;
	this->EnergyPoints++;
	return (*this);
}

ClapTrap	ClapTrap::operator++(int)
{
	ClapTrap	obj(*this);

	this->HitPoint++;
	this->AttackDamage++;
	this->EnergyPoints++;
	return (obj);
}

ClapTrap&	ClapTrap::operator--()
{
	this->HitPoint--;
	this->AttackDamage--;
	this->EnergyPoints--;
	return (*this);
}

ClapTrap	ClapTrap::operator--(int)
{
	ClapTrap	obj(*this);

	this->HitPoint--;
	this->AttackDamage--;
	this->EnergyPoints--;
	return (obj);
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->clapName << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl; 
	this->HitPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->HitPoint = this->HitPoint - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoint == 0 && this->EnergyPoints == 0)
	{
		std::cout << "ClapTrap " << this->clapName << " is dead!" << std::endl;
		return ;
	}
	this->HitPoint += amount;
	this->EnergyPoints--;
}
