/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:41:37 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/09 15:01:28 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	test_01()
{
	std::cout << "TEST 01\n";

	ClapTrap	clap_one("Liedson");
	ClapTrap	clap_two("Tiago");

	clap_one.attack("eyes");
	clap_two.takeDamage(5);
	clap_two.showStats();
	clap_two.beRepaired(3);
	clap_two.showStats();

	clap_two.attack("tight");
	clap_one.takeDamage(2);
	clap_two.showStats();
	clap_one.beRepaired(2);
	clap_one.showStats();
}

void	test_02()
{
	std::cout << "TEST 02\n";

	ScavTrap	scav_one("Gildo");
	ScavTrap	scav_two("Mauro");

	scav_one.attack("belly");
	scav_two.takeDamage(3);
	scav_two.beRepaired(2);
	scav_two.showStats();

	scav_two.attack("head");
	scav_one.guardGate();
	scav_one.showStats();
}

void	test_03()
{
	std::cout << "TEST 03\n";

	ClapTrap	clap_one("Márcio"), clap_two("Tavares"), clap_three(clap_two), clap_four;
	ScavTrap	scav_one("Daniel"), scav_two("Gerson"), scav_three(scav_two), scav_four;

	clap_four = clap_one;
	scav_four = scav_one;

	clap_one.attack("chest");
	clap_two.takeDamage(2);
	clap_two.beRepaired(2);
	clap_two.showStats();
	clap_three.attack("right leg");
	clap_four.takeDamage(2);
	clap_four.beRepaired(2);
	clap_four.showStats();
	scav_one.attack("nose");
	scav_two.takeDamage(2);
	scav_two.beRepaired(2);
	scav_two.showStats();
	scav_three.attack("left leg");
	scav_four.takeDamage(2);
	scav_four.beRepaired(2);
	scav_four.showStats();
	scav_one.guardGate();
	scav_one.showStats();
	scav_three.guardGate();
	scav_three.showStats();
}

void	test_04()
{
	std::cout << "TEST 04\n";

	FragTrap	frag_one("Edmilson");
	FragTrap	frag_two("João");

	frag_two.highFivesGuys();
	frag_one.attack("arm");
	frag_two.takeDamage(2);
	frag_two.showStats();
	frag_two.beRepaired(2);
	frag_two.showStats();

	frag_two.attack("chest");
	frag_one.takeDamage(3);
	frag_one.showStats();
	frag_one.beRepaired(2);
	frag_one.highFivesGuys();
	frag_two.attack("head");
	frag_one.takeDamage(5);
	frag_one.showStats();
}

int	main(void)
{
	test_01();
	std::cout << "----------------------------------------------------------" << std::endl;
	test_02();
	std::cout << "----------------------------------------------------------" << std::endl;
	test_03();
	std::cout << "----------------------------------------------------------" << std::endl;
	test_04();
	std::cout << "----------------------------------------------------------" << std::endl;

	return (0);
}
