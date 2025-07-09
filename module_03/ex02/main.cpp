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

int	main(void)
{
	FragTrap	frag_one("Edmilson");
	FragTrap	frag_two("Alexandre");

	frag_two.highFivesGuys();
	frag_one.attack("arm");
	frag_two.takeDamage(2);
	frag_two.beRepaired(2);

	frag_two.attack("chest");
	frag_one.takeDamage(3);
	frag_one.beRepaired(2);
	frag_one.highFivesGuys();
	frag_two.attack("head");
	frag_one.takeDamage(5);

	return (0);
}
