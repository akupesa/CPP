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

# include <iostream>
# include <cctype>
# include <string>
# include "Weapon.hpp"


class	HumanB
{
	private:
		std::string	name;
		std::string	&humanBweapon;

	public:
		void	attack(void);

		HumanB();
		HumanB(std::string name, std::string &humanBweapon);
		~HumanB();
};
#endif
