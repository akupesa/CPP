/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:30:36 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/04 16:27:24 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanA.hpp"

class	HumanB 
{
	private:
		std::string name;
		
		Weapon* weapon;

	public:
		void attack();
		void setWeapon(Weapon& weapon);
		
		HumanB(std::string& name);
};

#endif
