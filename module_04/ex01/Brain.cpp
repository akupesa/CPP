/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:19:20 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 17:29:19 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called!" << std::endl;
}

Brain::Brain(const Brain& bra)
{
	int index = -1;

	std::cout << "Brain copy constructor called!" << std::endl;
	while (++index < 100)
		this->ideas[index] = bra.ideas[index];
}

Brain& Brain::operator=(const Brain& bra)
{
	int index = -1;

	std::cout << "Brain copy assignment operator called!" << std::endl;
	if (this != &bra)
	{
		while (++index < 100)
		this->ideas[index] = bra.ideas[index];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

void	Brain::setBrain(std::string ideas, unsigned int index)
{
	this->ideas[index] = ideas;
}

std::string	Brain::getBrain(unsigned int index)
{
	return (this->ideas[index]);
}
