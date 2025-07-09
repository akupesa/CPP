/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:25:43 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/09 12:47:35 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap
{
	protected:
		std::string	clapName;

		unsigned int	HitPoint;
		unsigned int	AttackDamage;
		unsigned int	EnergyPoints;


	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap& clap);
		ClapTrap& operator=(const ClapTrap& clap);

		ClapTrap  operator-(const ClapTrap& clap);
		ClapTrap& operator++();
		ClapTrap  operator++(int);
		ClapTrap& operator--();
		ClapTrap  operator--(int);

		~ClapTrap();

		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		virtual void	attack(const std::string& target);

		/*int		getIntValue();
		std::string	getStringValue();

		void		setIntValue(unsigned int HitPoint, unsigned int AttackDamage, unsigned int EnergyPoints);
		void		setStringValue(std::string clapName);*/
};

#endif //CLAPTRAP_HPP
