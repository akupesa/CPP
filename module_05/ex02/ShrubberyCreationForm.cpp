/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:10:01 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/08 12:10:03 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : sSign(150), sExec(150), sTarget("")
{
	std::cout << "ShrubberyCreationForm default constructor.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string sTarget) : sSign(25), sExec(5), sTarget("")
{
	std::cout << "ShrubberyCreationForm parameterized constructor.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) : sSign(scf.sSign), sExec(scf.sExec), sTarget(scf.sTarget)
{
	std::cout << "ShrubberyCreationForm copy constructor.\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf)
{
	if (this != &scf)
		this->sTarget = scf.sTarget;
	std::cout << "ShrubberyCreationForm copy assignment operator.\n";
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor.\n";
}
