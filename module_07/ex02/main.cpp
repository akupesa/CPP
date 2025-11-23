/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:19:40 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/22 11:19:51 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> a(5);
	for (int i = 0; i < 5; i++)
		a[i] = i + 1;

	Array<int> b = a;
	b[0] = 42;

	std::cout << a[0] << std::endl;
	std::cout << b[0] << std::endl;

	try
	{
		a[10];
	}
	catch(const std::exception& e)
	{
		std::cout << "Out of Range!" << std::endl;
	}
	
	return (0);
}