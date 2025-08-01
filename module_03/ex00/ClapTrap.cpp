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

ClapTrap::ClapTrap() : clapName(""), HitPoint(0), AttackDamage(0), EnergyPoints(0)
{
	std::cout << "Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : clapName(Name), HitPoint(10), AttackDamage(0), EnergyPoints(10)
{
	std::cout << "Parameter constructor called!" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "Copy constructor called!" << std::endl;
	if (this != &clap)
		*this = clap;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clap)
{
	std::cout << "Copy assignment operator called!" << std::endl;
	if (this != &clap)
	{
		this->clapName = clap.clapName;
		this->HitPoint = clap.HitPoint;
		this->EnergyPoints = clap.EnergyPoints;
		this->AttackDamage = clap.AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->HitPoint <= 0)
	{
		std::cout << "ClapTrap " << this->clapName << " is already dead!" << std::endl;
		return ;
	}
	if (this->EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->clapName << " I'm tired, broh!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->clapName << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl; 
	this->EnergyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint < amount)
		this->HitPoint = 0;
	else
		this->HitPoint = this->HitPoint - amount;
	if (this->HitPoint <= 0)
	{
		std::cout << "ClapTrap " << this->clapName << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->clapName << " has taken " << amount << " of damage." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoint <= 0)
	{
		std::cout << "ClapTrap " << this->clapName << " is already dead!" << std::endl;
		return ;
	}
	if (this->EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->clapName << " I'm tired, broh!" << std::endl;
		return ;
	}
	this->HitPoint += amount;
	this->EnergyPoints--;
	std::cout << "ClapTrap " << this->clapName << " has been repaired in " << amount << " points." << std::endl;
}

void	ClapTrap::showStats() const
{
	std::cout << "ClapTrap " << this->clapName << " has " 
		<< this->HitPoint << " HitPoints and " 
		<< this->EnergyPoints 
		<< " EnergyPoints." << std::endl;
}
