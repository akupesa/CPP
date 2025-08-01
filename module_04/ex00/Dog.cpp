/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:28:34 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 13:13:46 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type) : Animal (type)
{
	std::cout << "Dog parameter constructor called!" << std::endl;
	this->type = type;
}

Dog::Dog(const Dog& dog): Animal()
{
	std::cout << "Dog copy constructor called!" << std::endl;
	if (this != &dog)
		this->type = dog.type;
}

Dog&	Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this != &dog)
		this->type = dog.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->type);
}

void	Dog::makeSound() const
{
	std::cout << "aw aw" << std::endl;
}

void	Dog::makeSoundWithType() const
{
	std::cout << this->type << " makes rough rough." << std::endl;
}
