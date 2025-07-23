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
	this->type = type;
	std::cout << "Animal Constructor called!" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
}

Animal::Animal(const Animal& ani)
{
	std::cout << "Copy Constructor called!" << std::endl;
	this->type = ani.type;
}

Animal&	Animal::operator=(const Animal& ani)
{
	if (this != &ani)
		this->type = ani.type;
	std::cout << "Copy Assignment Operator called!" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called!" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "random animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
