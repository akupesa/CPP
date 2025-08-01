/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:42:59 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/09 16:24:37 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	Name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string Name);
		DiamondTrap(const DiamondTrap& diamond);
		DiamondTrap& operator=(const DiamondTrap& diamond);
		~DiamondTrap();

		void	showStats() const;
		void	whoAmI();
};

#endif //DIAMONDTRAP_HPP
