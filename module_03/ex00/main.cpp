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
#include <limits>

int	main(void)
{
	std::string	name1 = "Anderson";
	std::string	name2 = "Hamilton";
	ClapTrap	Clap_One(name1);
	ClapTrap	Clap_Two(name2);
	ClapTrap	CLap_Three;
	
	Clap_One.attack("belly");
	Clap_Two.beRepaired(3);
	Clap_Two.takeDamage(3);
	Clap_Two.attack("legs");
	Clap_One.beRepaired(3);
	Clap_One.takeDamage(3);
	CLap_Three.attack("head");

	return (0);
}
