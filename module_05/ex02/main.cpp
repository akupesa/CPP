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
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "----------------------------------------------------------------" << std::endl;
	
	std::cout << "__________TEST 01__________" << std::endl;
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

	std::cout << "----------------------------------------------------------------" << std::endl;
	
	std::cout << "__________TEST 02__________" << std::endl;
	try
	{
		Bureaucrat bur("Kota", 1);
		RobotomyRequestForm robot("Wall-E");

		std::cout << bur << std::endl;
		std::cout << robot << std::endl;

		bur.executeForm(robot);
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------------------------" << std::endl;
	
	std::cout << "__________TEST 03__________" << std::endl;
	try
	{
		Bureaucrat bur("Verstappen", 50);
		PresidentialPardonForm pardon("Morty");

		std::cout << bur << std::endl;
		std::cout << pardon << std::endl;

		bur.signForm(pardon);
		bur.executeForm(pardon);
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------------------------" << std::endl;
	
	std::cout << "__________TEST 04__________" << std::endl;
	try
	{
		Bureaucrat bur("Luigi", 150);
		ShrubberyCreationForm shrub("Backyard");

		std::cout << bur << std::endl;
		std::cout << shrub << std::endl;

		bur.signForm(shrub);
		bur.executeForm(shrub);
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	

	return (0);
}
