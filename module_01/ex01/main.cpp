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
	int		i = 0;
	int		N = 20;
	std::string	name = "Gru";
	
	Zombie*	horde = zombieHorde(N, name);
	if (horde)
	{
		for(i = 0; i < N; i++)
			horde->announce();
	}
	delete[] horde;
	return (0);
}
