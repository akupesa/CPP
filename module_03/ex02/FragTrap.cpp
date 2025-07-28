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
	this->HitPoint = 100;
	this->AttackDamage = 30;
	this->EnergyPoints = 100;
}

FragTrap::FragTrap(const FragTrap& frag): ClapTrap()
{
	std::cout << "Copy constructor called!" << std::endl;

	if (this != &frag)
		*this = frag;
}

FragTrap&	FragTrap::operator=(const FragTrap& frag)
{
	std::cout << "Copy assignment operator called!" << std::endl;
	if (this != &frag)
	{
		this->clapName = frag.clapName;
		this->HitPoint = frag.HitPoint;
		this->AttackDamage = frag.AttackDamage;
		this->EnergyPoints = frag.EnergyPoints;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Hey! High-Five Trap!" << std::endl;
}

void	FragTrap::showStats() const
{
	std::cout << "FragTrap " << this->clapName << " has " 
		<< this->HitPoint << " HitPoints and " 
		<< this->EnergyPoints 
		<< " EnergyPoints." << std::endl;
}