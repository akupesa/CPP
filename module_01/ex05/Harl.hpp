/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:16:21 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/16 15:42:11 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class	Harl
{
	private:
		void	info(void);
		void	error(void);
		void	debug(void);
		void	warning(void);
	public:
		void	complain(std::string level);

		Harl();
		~Harl();
};

#endif
