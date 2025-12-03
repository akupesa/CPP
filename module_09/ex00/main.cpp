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

int	verifier(int ac)
{
	if (ac < 2)
	{
		std::cout << "Few arguments.\n";
		return (1);
	}
	if (ac > 2)
	{
		std::cout << "Many arguments.\n";
		return (1);
	}
	return (0);
}

int main(int ac, char **av)
{
	BitcoinExchange be;
	(void)av;
	verifier(ac);
	std::cout << "BitcoinExchange\n";

	return (0);
}
