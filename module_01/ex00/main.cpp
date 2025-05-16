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

int	main(int ac, char **av)
{
	Zombie	oZombie;

	(void)ac;
	(void)av;

	std::string	choice;

	std::stack<std::string> zombieStack;


	std::cout << "Zombies Out There!" << std::endl << std::endl;
	
	while (1)
	{
		std::cout << "Select an option:\n";
		std::cout <<  "Announce - You can create a zombie but it announces itself\nCreation - Creates a zombie\nShow - Display all the zombies in the stack\nExit - Leave the program\n";
		std::cout << "> ";
		getline(std::cin, choice);
		if (choice == "Announce" || choice == "announce" || choice == "ANNOUNCE")
			randomChump(choice);
		else if (choice == "Creation" || choice == "creation" || choice == "CREATION")
			newZombie(choice);
		else if (choice == "Show" || choice == "show" || choice == "SHOW")
		{
			std::stack<std::string> copy = zombieStack;
			while (!copy.empty())
			{
				std::cout << copy.top() << std::endl;
				copy.pop();
			}
		}
		else
		{
			if (choice == "Exit" || choice == "exit" || choice == "EXIT")
				exit (0);
		}
	}
	return (0);
}
