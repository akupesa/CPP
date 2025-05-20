/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:01:32 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/18 19:03:25 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
	int		N;
	std::string	name;

	std::cout << "Horde of Zombies are coming...\n" << std::endl;
		do {
			std::cout << "Inset the number of zombies to be created.\n> ";
			std::cin >> N;
			if (!(N >= 0 && N <= 9))
				std::cout << "Insert a valid number.\n";
		} while (!(N >= 0 && N <= 9));
		
		do {
			std::cout << "Insert the name of the zombies.\n> ";
			getline(std::cin, name);
			if (name.length() == 0)
				std::cout << "Insert a valid name.\n";
		} while (name.length() == 0);

		Zombie* horde = zombieHorde(N, name);
		if (horde)
		{
			for (int i = 0; i < N; i++)
				horde->announce();
		}
		delete[] horde;
	return (0);
}
