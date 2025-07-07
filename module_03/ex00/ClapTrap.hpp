/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:25:43 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/07 16:37:11 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <cmath>
# include <string>
# include <iostream>

class	ClapTrap
{
	private:
		const int	HitPoint = 10;
		const int	AttackDamage = 0;
		const int	EnergyPoints = 10;

		std::string	Name;

	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap& clap);
		ClapTrap& operator=(const ClapTrap& clap);
		~ClapTrap();

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	attack(const std::string& target);
};

std::ostream& operator<<(std::ostream clap, const ClapTrap& ClapObj);

#endif //CLAPTRAP_HPP
