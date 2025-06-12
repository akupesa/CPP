/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:28:35 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/04 16:28:52 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libraries.hpp"

HumanB::HumanB(const std::string& name)
{
	this->name = name;
	this->weapon = nullptr;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack() const 
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with" << std::endl;
}