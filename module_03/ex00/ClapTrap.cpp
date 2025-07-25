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
	std::cout << "Assignment constructor called!" << std::endl;
	if (this != &clap)
	{
		this->clapName = clap.clapName;
		this->HitPoint = clap.HitPoint;
		this->EnergyPoints = clap.EnergyPoints;
		this->AttackDamage = clap.AttackDamage;
	}
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
	std::cout << "ClapTrap " << this->clapName << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl; 
	this->EnergyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint <= 0)
	{
		std::cout << "ClapTrap " << this->clapName << " is already dead!" << std::endl;
		return ;
	}
	if (this->HitPoint < amount)
		this->HitPoint = 0;
	else
		this->HitPoint = this->HitPoint - amount;
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
	if (long(this->HitPoint) + long(amount) >= std::numeric_limits<unsigned int>::max())
		this->HitPoint = std::numeric_limits<unsigned int>::max();
	else
		this->HitPoint += amount;
	this->EnergyPoints--;
	std::cout << "ClapTrap " << this->clapName << " has been repaired in " << amount << " points." << std::endl;
}
