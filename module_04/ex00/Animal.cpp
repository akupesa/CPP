/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:54:45 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/14 16:08:26 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called!" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Initialization COnstructor called!" << std::endl;
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
	std::cout << "Copy Assignment Constructor called!" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called!" << std::endl;
}
