/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:06:07 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/09 14:57:27 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string Name);
		FragTrap(const FragTrap& frag);
		FragTrap& operator=(const FragTrap& frag);
		~FragTrap();

		void	showStats() const;
		void	highFivesGuys(void);
};

#endif // FRAGTRAP_HPP


