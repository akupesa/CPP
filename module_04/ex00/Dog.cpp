/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:28:34 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/14 16:36:19 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called!" << std::endl;
}

Dog::Dog(std::string type)
{
	this->type = type;
}

Dog::Dog(const Dog& dog): Animal()
{
	std::cout << "Copy Constructor called!" << std::endl;
	this->type = dog.type;
}

Dog&	Dog::operator=(const Dog& dog)
{
	if (this != &dog)
		this->type = dog.type;
	std::cout << "Copy Assignment Constructor called!" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called!" << std::endl;
}

void	Dog::makeSound()
{
	std::cout << "rough rough" << std::endl;
}

