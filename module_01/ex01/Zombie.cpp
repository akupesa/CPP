/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:03:36 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/18 19:03:52 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
        this->name;
}

Zombie::~Zombie(){}

void    annouce()
{
        std::cout << this->name << ": BraiiiiiiinnnzzzZ" << std::endl;
        std::cout << std::endl;
}