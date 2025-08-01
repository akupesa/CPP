/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:09:29 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 13:10:48 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string type) : Animal (type)
{
	std::cout << "Cat parameter constructor called!" << std::endl;
	this->type = type;
}

Cat::Cat(const Cat& cat): Animal()
{
	std::cout << "Cat copy constructor called!" << std::endl;
	if (this != &cat)
		this->type = cat.type;
}

Cat&	Cat::operator=(const Cat& cat)
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &cat)
		this->type = cat.type;
	return (*this);
}

Cat::~Cat()
{
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

void	Cat::makeSoundWithType() const
{
	std::cout << this->type << " makes meow meow." << std::endl;
}
