/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:58:34 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/15 15:56:59 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stack>

class Zombie
{
	private:
		std::string	name;

		stack<std::String> zombieStacks;

	public:
		void		announce(void);
		void		randomChump(std::string name);

		Zombie*		newZombie(std::string name);

		Zombie();
		Zombie(std::string name);
		~Zombie()
		{
			std::cout << "Zombie " << name << " destroyed!" << std::endl;
		}
