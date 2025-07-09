/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:16:01 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/09 13:46:10 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(const std::string Name)
{
	std::cout << "ScavTrap Default Constructor called!" << std::endl;
	this->clapName = Name;
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
	this->HitPoint = 100;
}

ScavTrap::ScavTrap(const ScavTrap& scav): ClapTrap()
{
	std::cout << "ScavTrap Copy Constructor called!" << std::endl;
	this->clapName = scav.clapName;
	this->AttackDamage = scav.AttackDamage;
	this->EnergyPoints = scav.EnergyPoints;
	this->HitPoint = scav.HitPoint;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scav)
{
	if (this != &scav)
	{
		this->clapName = scav.clapName;
		this->AttackDamage = scav.AttackDamage;
		this->EnergyPoints = scav.EnergyPoints;
		this->HitPoint = scav.HitPoint;
	}
	std::cout << "Copy assignment constructor called!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->clapName << " is now in Gate Keeper Mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->clapName << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl; 
	this->HitPoint--;
}
