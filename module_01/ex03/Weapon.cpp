/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:29:07 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/04 16:29:29 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string& type)
{
	this->type = type;
}

std::string& Weapon::getType() 
{
    return (type);
}

void Weapon::setType(std::string& newType)
{
    type = newType;
}
