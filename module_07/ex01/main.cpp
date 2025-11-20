/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:44:14 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/19 13:44:42 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	interPrinter(int& i)
{
	std::cout << i << " ";
}

void stringerPrinter(const std::string& s)
{
	std::cout << "\"" << s << "\" ";
}

int main()
{
	std::cout << "=== TESTE 1 - Array de Inteiros ===";
	
	int array[] = {1, 2, 3, 4, 5, 6};

	iter(array, 6, interPrinter);
	std::cout << std::endl;
	std::cout << "-------------------------------------\n";

	std::cout << "=== TESTE 2 - Array de Chars ===";

	char chars[] = {"42 Luanda"};
	iter(chars, std::strlen(chars), [](char c) { std::cout << c;});
	std::cout << std::endl;
	std::cout << "-------------------------------------\n";
	
	std::cout << "=== TESTE 3: Array de string ===\n";
	std::string words[] = {"Majestic", "Hunter", "FC25", "Precision"};
	iter(words, 4, stringerPrinter);
	std::cout << "\n\n";
	std::cout << "-------------------------------------\n";

	std::cout << "=== TESTE 4: Array const ===\n";
	const int constArr[] = {10, 20, 30};
	iter(constArr, 3, interPrinter);
	std::cout << "\n";
	std::cout << "-------------------------------------\n";

	return (0);
}
