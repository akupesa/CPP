/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:10:01 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/17 15:39:15 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), sTarget("default")
{
	std::cout << "ShrubberyCreationForm default constructor.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string sTarget) : AForm("ShrubberyCreationForm", 145, 137), sTarget(sTarget)
{
	std::cout << "ShrubberyCreationForm parameterized constructor.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) : AForm(scf), sTarget(scf.sTarget)
{
	std::cout << "ShrubberyCreationForm copy constructor.\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf)
{
	if (this != &scf)
	{
		AForm::operator=(scf);
		this->sTarget = scf.sTarget;
	}
	std::cout << "ShrubberyCreationForm copy assignment operator.\n";
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor.\n";
}

std::string ShrubberyCreationForm::getTarget() const 
{
	return (this->sTarget);	
}

void	ShrubberyCreationForm::executeAction() const
{
	std::string	filename = this->sTarget + "_shrubbery";

	std::ofstream	file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Could not create file!" << filename << std::endl;
		return ;
	}
	file << "Tree!\n";
	file << std::endl;
	file << "         &&& &&  & &&" << std::endl;
	file << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
	file << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
	file << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
	file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	file << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	file << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	file << "     &&     \\|||" << std::endl;
	file << "             |||" << std::endl;
	file << "             |||" << std::endl;
	file << "             |||" << std::endl;
	file << "       , -=-~  .-^- _" << std::endl;

	if (file.fail())
	{
		std::cerr << "Erro ao escrever no ficheiro " << filename << std::endl;
		file.close();
		return ;
	}
	file.close();
	std::cout << "Shrubbery has been planted at " << this->sTarget << std::endl;
	std::cout << "File created: " << filename << std::endl;
}
