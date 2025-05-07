/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:22:33 by akupesa           #+#    #+#             */
/*   Updated: 2025/04/22 10:31:49 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	lowToUp(std::string &av)
{
	int		i;

	i = -1;
	while (++i < av.length())
	{
		if (av[i] == ' ' || av[i] == '\t')
			i++;
		if (av[i] >= 97 && av[i] <= 122)
			av[i] -= 32;
	}
}

int	main(int ac, char **av)
{
	int			i;
	std::string		args;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
	}
	else {
		for (i = 1; i < ac; ++i)
		{
			args = av[i];
			lowToUp(args);
			std::cout << args;
		}
		std::cout << std::endl;
	}
	return (0);
}
