/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:54:45 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 15:12:51 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called!" << std::endl;
	this->brain = NULL;
}

Animal::Animal(std::string type)
{
	this->type = type;
	this->brain = NULL;
}

Animal::Animal(const Animal& ani)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = ani;
}

Animal&	Animal::operator=(const Animal& ani)
{
	if (this != &ani)
	{
		this->type = ani.type;
		this->brain = ani.brain;
	}
	std::cout << "Copy assignment operator called!" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
