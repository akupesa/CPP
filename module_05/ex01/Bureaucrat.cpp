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

std::ostream&	operator<<(std::ostream& side, const Bureaucrat& obj)
{
	side << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (side);
}
