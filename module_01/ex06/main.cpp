/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:01:52 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/18 15:28:37 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac < 2)
		std::cout << "Not enough arguments!\n";
	else if (ac > 2)
		std::cout << "Too many arguments!\n";
	else
		harl.complain(av[1]);
	return (0);
}
