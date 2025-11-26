/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 10:28:27 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/23 10:28:29 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector <int> vec;

	vec.push_back(11);
	vec.push_back(14);
	vec.push_back(20);
	vec.push_back(26);
	vec.push_back(32);
	vec.push_back(33);
	vec.push_back(42);
	vec.push_back(45);
	vec.push_back(51);
	vec.push_back(59);

	try
	{
		std::vector<int>::iterator iter = easyfind(vec, 26);
		std::cout << "Integer found! " << *iter << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "Integer not found!\n";
	}
	
	try
	{
		std::vector<int>::iterator iter = easyfind(vec, 42);
		std::cout << "Integer found! " << *iter << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "Integer not found!\n";
	}
	
	try
	{
		std::vector<int>::iterator iter = easyfind(vec, 11);
		std::cout << "Integer found! " << *iter << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "Integer not found!\n";
	}
	
	try
	{
		std::vector<int>::iterator iter = easyfind(vec, 100);
		std::cout << "Integer found! " << *iter << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "Integer not found!\n";
	}
	
	return 0;
}
