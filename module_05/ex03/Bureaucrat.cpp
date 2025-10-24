/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:20:36 by akupesa           #+#    #+#             */
/*   Updated: 2025/09/10 14:20:40 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
	std::cout << "Bureaucrat default constructor." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat parametrized constructor." << std::endl;
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& bure) : name(bure.name), grade(bure.grade)
{
	std::cout << "Bureaucrat copy constructor." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bure)
{
	std::cout << "Bureaucrat copy assignment operator." << std::endl;
	if (this != &bure)
		this->grade = bure.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor." << std::endl;
}

Bureaucrat& Bureaucrat::operator++()
{
	this->grade--;
	if (this->grade < 1)
		throw GradeTooHighException();
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat obj(*this);

	this->grade--;
	if (this->grade < 1)
		throw GradeTooHighException();
	return (obj);
}

Bureaucrat& Bureaucrat::operator--()
{
	this->grade++;
	if (this->grade > 150)
		throw GradeTooLowException();
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat obj(*this);

	this->grade++;
	if (this->grade > 150)
		throw GradeTooLowException();
	return (obj);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

void	Bureaucrat::decrementGrade()
{
	this->grade++;
	if (this->grade < 1)
	throw GradeTooHighException();
}

void	Bureaucrat::incrementGrade()
{
	this->grade--;
	if (this->grade > 150)
	throw GradeTooHighException();
}

void	Bureaucrat::signForm(AForm& fox)
{
	Bureaucrat	bure;
	bool		bolbol;
	fox.beSigned(bure);

	bolbol = fox.getBool();
	if (bolbol == false)
		std::cout << this->name << " couldn't sign " << fox.getName() << " because its low grade.\n";
	if (bolbol == true)
		std::cout << this->name << " signed " << fox.getName();
	try
	{
		fox.beSigned(*this);
		std::cout << this->name << " signed " << fox.getName() << ".\n";
	}
	catch (const std::exception& e)
	{
		std::cout << this->name << " couldn't sign " << fox.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const AForm& fox) const
{
	try
	{
		fox.execute(*this);
		std::cout << this->name << " executed " << fox.getName() << ".\n";
	}
	catch (const std::exception& e)
	{
		std::cout << this->name << " could not execute " << fox.getName() << " because " << e.what() << std::endl;
	}
	
}

std::ostream&	operator<<(std::ostream& side, const Bureaucrat& obj)
{
	side << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (side);
}
