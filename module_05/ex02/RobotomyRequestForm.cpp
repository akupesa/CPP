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
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : rSing(150), rExec(150), rTarget("")
{
	std::cout << "RobotomyRequestForm default constructor.\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string rTarget) : rSing(72), rExec(45), rTarget(rTarget)
{
	std::cout << "RobotomyRequestForm parameterized constructor.\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf) : rSing(rrf.rSing), rExec(rrf.rExec), rTarget(rrf.rTarget)
{
	std::cout << "RobotomyRequestForm copy constructor.\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rrf)
{
	if (this != &rrf)
		this->rTarget = rrf.rTarget;
	std::cout << "RobotomyRequestForm copy assignment operator.\n";
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor.\n";
}
