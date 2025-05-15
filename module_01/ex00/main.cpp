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

int	main(intac, char **av)
{
	Zombie	oZombie;

	(void)av;

	std::string	choice;

	std::cout << "Zombies Out There!" << std::endl << std::endl;
	
	while (1)
	{
		std::cout << "Do you want an announcement?\n";
		std::cout <  "Yes or No?"
		std::cin >> choice;
		if (choice == YES || choice == Yes || choice == yes)
			oZombie.randomChump(choice);
		else if (choice == NO || choice == No || choice == no)
			oZombie.newZombie(choice);
		else 
			exit (0);
	}
	return (0);
}
