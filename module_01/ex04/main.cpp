/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:34:09 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/13 09:25:15 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	Sed	sed_obj;
		
	if (ac < 4)
		std::cout << "Not enough arguments!\n";
	else if (ac > 4)
		std::cout << "Too many arguments!\n";
	else
	{
		sed_obj.read_file(av[1], av[2], av[3]);	
	}
}
