/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:17:19 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/15 16:04:56 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ...";
}

void	Zombie::randomChump(std::string name)
{
	
	do {
		std::cout << "Insert the zombie's name: ";
		getline(std::cin, name);
		if (name.length() < 1)
	} while(name.length() < 1);

	Zombie::zombieStack.push(name);
	Zombie::annouce();
}

Zombie*		newZombie(std::string name)
{
	Zombie*		real;
	do {
		std::cout << "Insert the zombie's name: ";
		getline(std::cin, name);
		if (name.length() < 1)
	} while (name.length() < 1);
	
	real = new Zombie(name);
	return (real);
}
