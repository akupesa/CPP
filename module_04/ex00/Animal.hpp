/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:47:06 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/14 16:13:29 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <ostream>
# include <string>
# include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& ani);
		Animal&	operator=(const Animal& ani);
		~Animal();

		virtual void	makeSound();
};

std::ostream&	operator<<(std::ostream& op, const Animal& ani);

#endif //ANIMAL_HPP
