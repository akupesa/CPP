/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:42:22 by akupesa           #+#    #+#             */
/*   Updated: 2025/09/14 16:48:29 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), wasSigned(false), signIt(150), executeIt(150)
{
	std::cout << "Form default constructor." << std::endl;
}

Form::Form(const std::string name, const int signIt, const int executeIt) : name("Default"), wasSigned(false), signIt(signIt), executeIt(executeIt)
{
	std::cout << "Form parametrized constructor." << std::endl;
}

Form::Form(const Form& zeni) : name(zeni.name), wasSigned(zeni.wasSigned), signIt(zeni.signIt), executeIt(zeni.executeIt)
{
	std::cout << "Form copy constructor." << std::endl;
}

Form&	Form::operator=(const Form& zeni)
{
	std::cout << "Form copy assignment operator." << std::endl;
	if (this != &zeni)
	{
		this->wasSigned = zeni.wasSigned;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor." << std::endl;
}

bool	Form::getBool()
{
	return (this->wasSigned);
}

int	Form::getExec()
{
	return (this->executeIt);
}

std::string	Form::getName()
{
	return (this->name);
}

int	Form::getSign()
{
	return (this->signIt);
}

void	Form::beSigned(Bureaucrat bure)
{
	
}

std::ostream&	operator<<(std::ostream& side, const Form& zeni)
{
	side << "Form " zeni.getName() << ", has " << zeni.getSign() <<
		" to be signed and " << zeni.getExec() << " to be executed.";
	return (side);
}
