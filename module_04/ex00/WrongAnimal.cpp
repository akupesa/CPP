/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 08:49:48 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 12:31:47 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wa)
{
	std::cout << "WrongAnimal Copy Constructor called!" << std::endl;
	this->type = wa.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& wa)
{
	std::cout << "WrongAnimal Copy Assignment operator called!" << std::endl;
	if (this != &wa)
		this->type = wa.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called!" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "piu piu" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
