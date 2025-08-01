/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:18:39 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 12:10:58 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		~Dog();

		void		makeSound() const;
		void 		makeSoundWithType() const;
		std::string	getType() const;
};

#endif //DOG_HPP
