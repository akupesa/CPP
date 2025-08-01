/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:07:18 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/09 13:45:03 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string Name);
		ScavTrap(const ScavTrap& scav);
		ScavTrap& operator=(const ScavTrap& scav);
		~ScavTrap();

		void	guardGate();
                void    showStats() const;
		void	attack(const std::string& target);

};

#endif // SCAVTRAP_HPP
