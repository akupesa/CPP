/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:46:47 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/18 13:40:40 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Intern intern;
		Bureaucrat highGrade("Alice", 5);

        	std::cout << "----------------------------------------------------------------" << std::endl;
	
		std::cout << "__________TEST 01 - Valid Form__________" << std::endl;
		AForm* shrub = intern.makeForm("shrubbery creation", "garden");
		if (shrub)
		{
			highGrade.signForm(*shrub);
			highGrade.executeForm(*shrub);
			delete shrub;
		}


	        AForm* robot = intern.makeForm("robotomy request", "target");
		if (robot)
		{
			highGrade.signForm(*robot);
			highGrade.executeForm(*robot);
			delete robot;
		}

		AForm* invalid = intern.makeForm("invalid form", "nowhere");
		if (invalid)
		{
			highGrade.signForm(*invalid);
			highGrade.executeForm(*invalid);
			delete invalid;
		}

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
