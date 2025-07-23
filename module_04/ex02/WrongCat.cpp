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
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
	this->type = "Maine Coon";
	std::cout << "WrongCat Constructor called!" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	this->type = type;
}

WrongCat::WrongCat(const WrongCat& cat) : WrongAnimal()
{
	std::cout << "Copy Constructor called!" << std::endl;
	this->type = cat.type;
}

WrongCat& WrongCat::operator=(const WrongCat& cat)
{
	std::cout << "Copy Assignment OPerator called!" << std::endl;
	if (this != &cat)
		this->type = cat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called!" << std::endl;
}
