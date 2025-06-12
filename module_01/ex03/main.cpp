/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:30:08 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/04 16:32:26 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	std::string	kakuName = "Kaku";
	std::string	zoroName = "Roronoa Zoro";

	std::string	zhit2 = "Enma";
	std::string	zhit = "Wado Ichimonji";

	std::string	khit = "Shirasaya";
	std::string	khit2 = "Shirasaya";
	{
		Weapon	sword = Weapon(zhit);
		HumanA	zoro(zoroName, sword);
		
		zoro.attack();
		sword.setType(zhit2);
		zoro.attack();
	}
	std::cout << std::endl;
	usleep(700000);
	{
		HumanB	kaku(kakuName);
		Weapon	sword = Weapon(khit);

		kaku.attack();
		kaku.setWeapon(sword);
		kaku.attack();
		sword.setType(khit2);
		kaku.attack();
	}
	return (0);
}
