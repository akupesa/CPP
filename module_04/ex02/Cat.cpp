/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:09:29 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 17:59:39 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(std::string type) : Animal (type)
{
	this->brain = new Brain();
}

Cat::Cat(const Cat& cat): Animal(cat)
{
	std::cout << "Copy constructor called!" << std::endl;
	this->brain = new Brain(*cat.brain);
}

Cat&	Cat::operator=(const Cat& cat)
{
	std::cout << "Copy assignment operator called!" << std::endl;
	if (this != &cat)
	{
		delete (this->brain);
		this->brain = new Brain(*cat.brain);
		Animal::operator=(cat);
	}
	return (*this);
}

Cat::~Cat()
{
	delete (this->brain);
	std::cout << "Cat destructor called!" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}

Brain&	Cat::getBrain() const
{
	return (*this->brain);
}

void	Cat::makeSoundWithType() const
{
	std::cout << this->type << " makes meow meow." << std::endl;
}
