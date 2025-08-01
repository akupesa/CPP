/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:13:51 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/04 16:27:48 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string& name, Weapon& weapon) : name(name), weapon(weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void	HumanA::attack(void) 
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
