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
# include <cctype>
# include <string>

class	Weapon
{
	private:
		const std::string	type;

	public:
		const std::string&	getType() const;
		void	setType(const std::string& newType);
		
		Weapon();
		Weapon(const std::string& type);
		~Weapon();
};

#endif
