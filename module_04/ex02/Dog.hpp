/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:18:39 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 17:56:30 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <ostream>
# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"

class	Dog: public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		~Dog();

		void		makeSound() const;
		void		makeSoundWithType() const;
		std::string	getType() const;
		Brain&		getBrain() const;
};

#endif //DOG_HPP
