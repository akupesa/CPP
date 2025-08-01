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
	std::string name = "Olavio";
	Zombie	*instanceZombie;
	
	instanceZombie = newZombie(name);
	instanceZombie->announce();

	name = "Amaral";
	randomChump(name);
	delete instanceZombie;
	return (0);
}
