/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:42:22 by akupesa           #+#    #+#             */
/*   Updated: 2025/09/14 16:48:29 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), wasSigned(false), signIt(150), executeIt(150)
{
	std::cout << "Form default constructor." << std::endl;
}

AForm::AForm(const std::string name, const int signIt, const int executeIt) : name(name), wasSigned(false), signIt(signIt), executeIt(executeIt)
{
	std::cout << "Form parametrized constructor." << std::endl;
}

AForm::AForm(const AForm& zeni) : name(zeni.name), wasSigned(zeni.wasSigned), signIt(zeni.signIt), executeIt(zeni.executeIt)
{
	std::cout << "Form copy constructor." << std::endl;
}

AForm&	AForm::operator=(const AForm& zeni)
{
	std::cout << "Form copy assignment operator." << std::endl;
	if (this != &zeni)
	{
		this->wasSigned = zeni.wasSigned;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor." << std::endl;
}

bool	AForm::getBool() const
{
	return (this->wasSigned);
}

int	AForm::getExec() const
{
	return (this->executeIt);
}

std::string	AForm::getName() const
{
	return (this->name);
}

int	AForm::getSign() const
{
	return (this->signIt);
}

void	AForm::beSigned(Bureaucrat& bure)
{
	int temp = bure.getGrade();

	if (temp < 1)
		throw GradeTooHighException();
	if (temp > 150)
		throw GradeTooLowException();
	if (temp <= this->signIt)
		this->wasSigned = true;
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (!this->wasSigned == false)
		throw FormNotSignedException();
	if (executor.getGrade() > this->executeIt)
		throw GradeTooLowException();
	executeAction();
}

std::ostream&	operator<<(std::ostream& side, const AForm& zeni)
{
	side << "Form " << zeni.getName() << ", has " << zeni.getSign() << " to be signed and " << zeni.getExec() << " to be executed.";
	return (side);
}
