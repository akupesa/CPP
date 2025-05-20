/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:38:33 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/15 16:25:52 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	oZombie(std::string name);

	std::string	name;
	std::string	choice;

	std::stack<std::string> zombieStack;


	std::cout << "Zombies Out There!" << std::endl << std::endl;
	
	while (1)
	{
		std::cout << "Select an option:\n" << std::endl;
		std::cout << "* Announce - You can create a zombie but it announces itself\n";
		std::cout << "* Creation - Creates a zombie\n";
		std::cout << "* Exit - Leave the program\n";
		std::cout << "> ";

		getline(std::cin, choice);

		if (choice == "Announce" || choice == "announce" || choice == "ANNOUNCE")
		{
			do {
				std::cout << "Insert the zombie's name: ";
				getline(std::cin, name);
				if (name.length() == 0)
					std::cout << "Insert a name.\n";
			} while (name.length() == 0);
			std::cout << "\n";
			randomChump(name);
		}
		else if (choice == "Creation" || choice == "creation" || choice == "CREATION")
		{
			do {
				std::cout << "Insert the zombie's name: ";
				getline(std::cin, name);
				if (name.length() == 0)
					std::cout << "Insert a name.\n";
			} while (name.length() == 0);
			std::cout << "\n";
			Zombie* zombieHeap = newZombie(name);
			zombieHeap->announce();
			delete (zombieHeap);
		}
		else
		{
			if (choice == "Exit" || choice == "exit" || choice == "EXIT")
				exit (0);
		}
	}
	return (0);
}
