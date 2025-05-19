/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:04:25 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/18 19:07:16 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	private:
		std::string	name;
	
	public:
		void 	announce(void);
		
		Zombie();
		Zombie(std::string name);
		~Zombie();
};

	Zombie*	zombieHorde(int N, std::string name);


#endif
