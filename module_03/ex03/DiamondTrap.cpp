/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:03:07 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/09 16:24:42 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string Name): ClapTrap(Name + "_clap_name")
{
	std::cout << "DiamondTrap parameter constructor called!" << std::endl;
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond): ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	if (this != &diamond)
		*this = diamond;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& diamond)
{
	std::cout << "DiamondTrap copy assignment operator called!" << std::endl;
	if (this != &diamond)
	{
		this->clapName = diamond.Name;
		this->HitPoint = diamond.HitPoint;
		this->EnergyPoints = diamond.EnergyPoints;
		this->AttackDamage = diamond.AttackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!" << std::endl;
}

void	DiamondTrap::showStats() const
{
	std::cout << "DiamondTrap " << this->clapName << " has " 
		<< this->HitPoint << " HitPoints and " 
		<< this->EnergyPoints 
		<< " EnergyPoints." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I'm DiamondTrap " << this->clapName << "." << std::endl;
}