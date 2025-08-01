/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:21:45 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/07 16:21:54 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	test_01()
{
	std::cout << "TEST 01\n";
	std::string	name1 = "Anderson";
	std::string	name2 = "Hamilton";
	ClapTrap	Clap_One(name1);
	ClapTrap	Clap_Two(name2);
	
	Clap_One.attack("belly");
	Clap_Two.takeDamage(6);
	Clap_Two.beRepaired(3);
	Clap_Two.showStats();
	Clap_Two.attack("legs");
	Clap_One.takeDamage(6);
	Clap_One.beRepaired(3);
	Clap_One.showStats();
}

void	test_02()
{
	std::cout << "TEST 02\n";
	ClapTrap	Clap_One;
	ClapTrap	Clap_Two("Samuel");
	ClapTrap	Clap_Three(Clap_Two);
	ClapTrap	Clap_Four;

	Clap_Four = Clap_One;

	Clap_One.attack("chest");
	Clap_Two.takeDamage(2);
	Clap_Two.beRepaired(2);
	Clap_Two.showStats();
	Clap_Three.attack("head");
	Clap_Four.takeDamage(2);
	Clap_Four.beRepaired(2);
	Clap_Four.showStats();

}

int	main(void)
{
	test_01();
	std::cout << "----------------------------------------------------------" << std::endl;
	test_02();
	std::cout << "----------------------------------------------------------" << std::endl;

	return (0);
}
