/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:47:06 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 15:10:23 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <ostream>
# include <iostream>
# include "Brain.hpp"

class	Animal
{
	protected:
		std::string	type;
		Brain* brain;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& ani);
		Animal&	operator=(const Animal& ani);
		virtual ~Animal();

		virtual void		makeSound() const = 0;
		virtual std::string	getType() const;
};

#endif //ANIMAL_HPP
