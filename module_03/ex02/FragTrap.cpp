/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:29:56 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/09 15:02:33 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string Name)
{
	this->clapName = Name;
	this->AttackDamage = 30;
	this->EnergyPoints = 100;
	this->HitPoint = 100;
}

FragTrap::FragTrap(const FragTrap& frag): ClapTrap()
{
	std::cout << "Copy Constructor called!" << std::endl;

	this->clapName = frag.clapName;
	this->AttackDamage = frag.AttackDamage;
	this->EnergyPoints = frag.EnergyPoints;
	this->HitPoint = frag.HitPoint;
}


FragTrap&	FragTrap::operator=(const FragTrap& frag)
{
	if (this != &frag)
	{
		this->clapName = frag.clapName;
		this->AttackDamage = frag.AttackDamage;
		this->EnergyPoints = frag.EnergyPoints;
		this->HitPoint = frag.HitPoint;
	}
	std::cout << "Copy assignment Constructor called!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Hey! High-Five Trap!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap " << this->clapName << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl; 
	this->HitPoint--;
}
