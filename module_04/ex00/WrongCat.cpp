/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:12:12 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 12:48:49 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called!" << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat parameter constructor called!" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat& wc) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
	if (this != &wc)
		this->type = wc.type;
}

WrongCat& WrongCat::operator=(const WrongCat& wc)
{
	std::cout << "WrongCat copy assignment operator called!" << std::endl;
	if (this != &wc)
		this->type = wc.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}
