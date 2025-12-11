/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:24:48 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/09 14:24:51 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error: Few arguments.\n";
		return (1);
	}
	if (ac > 2)
	{
		std::cerr << "Error: Many argument.\n";
		return (1);
	}
	RPN rpn;

	if (!rpn.is_valid(av[1]))
	{
			std::cerr << "Invalid token.\n";
			return (1);
	}
	rpn.stack_in_stack_out(av[1]);

	return (1);
}
