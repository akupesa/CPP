/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:15:45 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/21 15:18:08 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void printName(const std::string &name)
{
	std::cout << name << std::endl;
	// name = "Anderson";
}

int	main(void)
{
	std::string name = "Rei";

	printName(name);
	std::cout << name << std::endl;
	// std::string	hiThisIsBrain = "Hi This Is Brain";
	// std::string	*stringPTR = &hiThisIsBrain;
	// std::string	&stringREF = hiThisIsBrain;

	// std::cout << "First, the addresses will be printed..." << std::endl;

	// std::cout << &hiThisIsBrain << std::endl;
	// std::cout << stringPTR << std::endl;
	// std::cout << &stringREF << std::endl << std::endl;

	// std::cout << "Then, the values..." << std::endl;

	// std::cout << hiThisIsBrain << std::endl;
	// std::cout << *stringPTR << std::endl;
	// std::cout << stringREF << std::endl << std::endl;

	// std::cout << "Everything has been printed!!!\n";

	return (0);
}
