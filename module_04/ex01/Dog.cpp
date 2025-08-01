/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:28:34 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 18:00:11 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called!" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(std::string type) : Animal (type)
{
	std::cout << "Dog parameter constructor called!" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& dog): Animal(dog)
{
	std::cout << "Dog parameter constructor called!" << std::endl;
	this->brain = new Brain(*dog.brain);
}

Dog&	Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this != &dog)
	{
		delete (this->brain);
		this->brain = new Brain(*dog.brain);
		Animal::operator=(dog);
	}
	return (*this);
}

Dog::~Dog()
{
	delete (this->brain);
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

Brain&	Dog::getBrain() const
{
	return (*this->brain);
}

void	Dog::makeSoundWithType() const
{
	std::cout << this->type << " makes rough rough." << std::endl;
}