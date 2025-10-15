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

PresidentialPardonForm::PresidentialPardonForm() : pSign(150), pExec(150), pTarget("abracadabra")
{
	std::cout << "PresidentialPardonForm default constructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string pTarget) : pSign(145), pExec(137), pTarget(pTarget)
{
	std::cout << "PresidentialPardonForm paraterized constructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ppf) : pSign(ppf.pSign), pExec(ppf.pExec), pTarget(ppf.pTarget)
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
