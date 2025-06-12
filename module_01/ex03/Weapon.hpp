/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:32:10 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/04 16:37:19 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <unistd.h>

class	Weapon 
{
	private:
		std::string type;

	public:
		Weapon(std::string& type);
		std::string& getType();
		void setType(std::string& newType);
};

#endif
