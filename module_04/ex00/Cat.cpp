/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:09:29 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/14 16:31:28 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"


Cat::Cat()
{
	std::cout << "Cat Constructor called!" << std::endl;
}

Cat::Cat(std::string type)
{
	this->type = type;
}

Cat::Cat(const Cat& cat): Animal()
{
	std::cout << "Copy Constructor called!" << std::endl;
	this->type = cat.type;
}

Cat&	Cat::operator=(const Cat& cat)
{
	if (this != &cat)
		this->type = cat.type;
	std::cout << "Copy Assignment Constructor called!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called!" << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "meow meow" << std::endl;
}
