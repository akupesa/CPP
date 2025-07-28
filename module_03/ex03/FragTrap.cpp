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
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string Name)
{
	std::cout << "FragTrap parameter constructor called!" << std::endl;
	this->clapName = Name;
	this->AttackDamage = 30;
	this->EnergyPoints = 100;
	this->HitPoint = 100;
}

FragTrap::FragTrap(const FragTrap& frag): ClapTrap()
{
	std::cout << "FragTrap copy constructor called!" << std::endl;
	if (this != &frag)
		*this = frag;
}


FragTrap&	FragTrap::operator=(const FragTrap& frag)
{
	std::cout << "FragTrap copy assignment operator called!" << std::endl;
	if (this != &frag)
	{
		this->clapName = frag.clapName;
		this->AttackDamage = frag.AttackDamage;
		this->EnergyPoints = frag.EnergyPoints;
		this->HitPoint = frag.HitPoint;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!" << std::endl;
}

void	FragTrap::showStats() const
{
	std::cout << "FragTrap " << this->clapName << " has " 
		<< this->HitPoint << " HitPoints and " 
		<< this->EnergyPoints 
		<< " EnergyPoints." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Hey! High-Five Trap!" << std::endl;
}