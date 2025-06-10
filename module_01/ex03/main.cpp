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

#include "Libraries.hpp"

int	main(void)
{
	{
		HumanA	a_human("Mauro");//, w_weapon);
		Weapon	w_weapon = Weapon("Braços");
		w_weapon.setType("Socos");
		a_human.attack();
	}
	{
		Weapon	w_weapon = Weapon("Pernas");
		HumanB	b_human("Gerson", w_weapon);
		b_human.setWeapon(w_weapon);
		w_weapon.setType("Bicos");
		b_human.attack();
	}
	return (0);
}
