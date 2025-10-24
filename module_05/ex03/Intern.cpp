/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 07:12:23 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/18 14:01:42 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const Intern::FormCreator Intern::formCreators[] = {
	{"shrubbery creation", &Intern::createShrubberyCreationForm},
	{"robotomy request", &Intern::createRobotomyRequestForm},
	{"presidential pardon", &Intern::createPresidentialPardonForm}
};

Intern::Intern()
{
	std::cout << "Intern constructor.\n";
}

Intern::Intern(const Intern& inte)
{
	(void)inte;
	std::cout << "Intern copy constructor.\n";
}

Intern& Intern::operator=(const Intern& inte)
{
	(void)inte;
	std::cout << "Intern copy assignment operator.\n";
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor.\n";
}

AForm* Intern::createShrubberyCreationForm(std::string target) const
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomyRequestForm(std::string target) const
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidentialPardonForm(std::string target) const
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string target) {
    for (int i = 0; i < 3; ++i) {
        if (formName == formCreators[i].formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*formCreators[i].creator)(target);
        }
    }
    std::cerr << "Error: Unknown form name '" << formName << "'" << std::endl;
    return NULL;
}
