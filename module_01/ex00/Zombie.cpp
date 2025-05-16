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

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " has been destroyed!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ...";
}

void	randomChump(std::string name)
{
	Zombie	instaZombie(name);
	
	do {
		std::cout << "Insert the zombie's name: ";
		getline(std::cin, name);
		if (name.length() == 0)
			std::cout << "Insert a name.\n";
	} while (name.length() == 0);

	instaZombie.zombieStack.push(name);
	instaZombie.announce();
}

Zombie*		newZombie(std::string name)
{
	Zombie*		real;
	do {
		std::cout << "Insert the zombie's name: ";
		getline(std::cin, name);
		if (name.length() == 0)
			std::cout << "Insert a name.\n";
	} while (name.length() == 0);
	
	real = new Zombie(name);
	return (real);
}
