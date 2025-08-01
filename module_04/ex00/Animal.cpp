/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:54:45 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 12:38:47 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal parameter constructor called!" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal& ani)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	if (this != &ani)
		this->type = ani.type;
}

Animal&	Animal::operator=(const Animal& ani)
{
	std::cout << "Animal copy assignment operator called!" << std::endl;
	if (this != &ani)
		this->type = ani.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "random animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSoundWithType() const
{
	std::cout << this->type << " makes a random animal sound." << std::endl;
}
