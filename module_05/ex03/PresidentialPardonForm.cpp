/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:09:34 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/08 12:09:36 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), pTarget("default")
{
	std::cout << "PresidentialPardonForm default constructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string pTarget) : AForm("PresidentialPardonForm", 25, 5), pTarget(pTarget)
{
	std::cout << "PresidentialPardonForm paraterized constructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ppf) : AForm(ppf), pTarget(ppf.pTarget)
{
	std::cout << "PresidentialPardonForm copy constructor." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ppf)
{
	if (this != &ppf)
		this->pTarget = ppf.pTarget;
	std::cout << "PresidentialPardonForm copy assignment operator." << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor." << std::endl;
}

void 	PresidentialPardonForm::executeAction() const
{
	std::cout << this->pTarget << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->pTarget);
}
