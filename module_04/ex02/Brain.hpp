/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:19:03 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 16:57:11 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& bra);
		Brain&	operator=(const Brain& bra);
		~Brain();

		void		setBrain(std::string ideas, unsigned int index);
		std::string	getBrain(unsigned int index);
};

#endif //BRAIN_HPP
