/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:58:37 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/18 14:48:49 by akupesa          ###   ########.fr       */
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
		void	debug(void);
		void	error(void);
		void	warning(void);
	public:
		void	complain(std::string level);

		Harl();
		~Harl();
};

#endif
