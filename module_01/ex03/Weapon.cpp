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

#include "Libraries.hpp"


Weapon::Weapon(const std::string& type)
{
	this->type = type;
}

const std::string& Weapon::getType() const 
{
    return type;
}

void Weapon::setType(const std::string& newType)
{
    type = newType;
}