/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:56:55 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/17 11:44:23 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data dat;

	dat.name = "Cristiano Ronaldo";

	std::cout << "Endereço original (&dat): " << &dat << std::endl;
	uintptr_t raw = Serializer::serialize(&dat);
	std::cout << raw << std::endl;

	Data *point;

	point = reinterpret_cast<Data *>(raw);
	std::cout << "Endereço desserializado: " << point << std::endl;

	std::cout << point->name << std::endl;
}
