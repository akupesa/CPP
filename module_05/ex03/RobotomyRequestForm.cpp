/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:09:45 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/08 12:09:47 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), rTarget("default")
{
	std::cout << "RobotomyRequestForm default constructor.\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string rTarget) : AForm("RobotomyRequestForm", 72, 45), rTarget(rTarget)
{
	std::cout << "RobotomyRequestForm parameterized constructor.\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf) : AForm(rrf), rTarget(rrf.rTarget)
{
	std::cout << "RobotomyRequestForm copy constructor.\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rrf)
{
	if (this != &rrf)
	{
		AForm::operator=(rrf);
		this->rTarget = rrf.rTarget;
	}
	std::cout << "RobotomyRequestForm copy assignment operator.\n";
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor.\n";
}

void	RobotomyRequestForm::executeAction() const
{
	std::cout << this->rTarget << " is making some drilling noises!\n";
	if (std::rand() % 2)
		std::cout << this->rTarget << " has been robotomized!\n";
	else 
		std::cout << this->rTarget << "'s robotomization failed!\n";
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->rTarget);
}
