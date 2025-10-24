/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:46:47 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/17 15:39:11 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat		bur("Alice", 10);
		RobotomyRequestForm	robot("BMO");
		ShrubberyCreationForm	shrubbery("Garden");

		std::cout << bur << std::endl;
		std::cout << robot << std::endl;
		std::cout << shrubbery << std::endl;

		bur.signForm(robot);
		bur.executeForm(robot);

		bur.signForm(shrubbery);
		bur.executeForm(shrubbery);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
