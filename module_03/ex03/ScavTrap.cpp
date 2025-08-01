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

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string Name)
{
	std::cout << "ScavTrap parameter constructor called!" << std::endl;
	this->clapName = Name;
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
	this->HitPoint = 100;
}

ScavTrap::ScavTrap(const ScavTrap& scav): ClapTrap()
{
	std::cout << "ScavTrap copy constructor called!" << std::endl;
	if (this != &scav)
		*this = scav;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scav)
{
	std::cout << "Copy assignment operator called!" << std::endl;
	if (this != &scav)
	{
		this->clapName = scav.clapName;
		this->AttackDamage = scav.AttackDamage;
		this->EnergyPoints = scav.EnergyPoints;
		this->HitPoint = scav.HitPoint;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->clapName << " is now in Gate Keeper Mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->clapName << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl; 
	this->HitPoint--;
}

void	ScavTrap::showStats() const
{
	std::cout << "ScavTrap " << this->clapName << " has " 
		<< this->HitPoint << " HitPoints and " 
		<< this->EnergyPoints 
		<< " EnergyPoints." << std::endl;
}