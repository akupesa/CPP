/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:07:16 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/01 14:07:18 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	verifier(int ac)
{
	if (ac < 2)
	{
		std::cout << "Few arguments.\n";
		return (false);
	}
	if (ac > 2)
	{
		std::cout << "Many arguments.\n";
		return (false);
	}
	return (true);
}

int main(int ac, char **av)
{
	if (!verifier(ac))
		return (1);

	BitcoinExchange btc;

	if (!btc.fileType(av[1]))
		return (1);
	if (!btc.loadDatabase("data.csv"))
		return (1);
	btc.lineReader(av[1]);

	return (0);
}
