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

#include "Libraries.hpp"

//HumanA::HumanA(){}

HumanA::HumanA(std::string name)
{
	this->name = name;
	//this->weapon = &weapon;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attack with their " << weapon.getType() << std::endl; 
}
