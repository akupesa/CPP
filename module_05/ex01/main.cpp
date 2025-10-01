/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:20:44 by akupesa           #+#    #+#             */
/*   Updated: 2025/09/10 14:20:46 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "__________TEST 01__________" << std::endl;

	try
	{
		Bureaucrat	Edm("Edmilson", 45);
		std::cout << Edm << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched: " << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	Gil("Gildo", 0);
		std::cout << Gil << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched: " << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	Mau("Mauro", 187);
		std::cout << Mau << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched: " << e.what() << '\n';
	}
	std::cout << "----------------------------------------------------------------" << std::endl;

	std::cout << "__________TEST 02__________" << std::endl;

	try
	{
		Bureaucrat	Ger("Gerson", 22);

		Ger++;
		std::cout << Ger << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched: " << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	Mar("Márcio", 123);

		Mar--;
		std::cout << Mar << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched: " << e.what() << '\n';
	}

	std::cout << "----------------------------------------------------------------" << std::endl;

	std::cout << "__________TEST 03__________" << std::endl;

	try 
	{
		Bureaucrat Tia("Tiago", 3);
		std::cout << Tia << std::endl;
		Tia++;
		std::cout << Tia << std::endl;
		Tia--;
		Tia--;// Pós: retorna 2, aumenta para 3
		std::cout << Tia << std::endl;

		Bureaucrat Tav("Limite", 1);
		Tav--;
		std::cout << Tav << std::endl;
	} 
	catch (std::exception & e) 
	{
		std::cout << "Exceção nos operadores: " << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------------------" << std::endl;
	
	std::cout << "__________TEST 04__________" << std::endl;

	Bureaucrat	Lie("Liedson", 42);
	
	std::cout << "Um teste básico para os getters de name " << Lie.getName() << " e de grade " << Lie.getGrade() << ", nice!" << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	try 
	{
		Bureaucrat Joa("João", 5);
		std::cout << Joa << std::endl;
		Joa.incrementGrade(); // Diminui para 4
		std::cout << Joa << std::endl;
		
		Bureaucrat Dan("Daniel", 78);
		Dan.decrementGrade(); // Aumenta para 5
		std::cout << Dan << std::endl;
	        // Teste de exceção
		Bureaucrat Lie("Liedson", 1);
		Lie.incrementGrade(); // Deve lançar GradeTooHighException
	} 
	catch (std::exception & e)
	{
		std::cout << "Exceção capturada: " << e.what() << std::endl;
	}	
	return (0);
}
