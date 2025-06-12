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


HumanA::HumanA(const std::string& name, Weapon& weapon) {
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::attack() const 
{
    if (weapon) 
	{
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
}
