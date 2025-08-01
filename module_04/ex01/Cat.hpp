/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:40:25 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 17:35:09 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"

class	Cat: public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		~Cat();

		void		makeSound() const;
		void		makeSoundWithType() const;
		std::string	getType() const;
		Brain&		getBrain() const;
};

#endif //CAT_HPP
