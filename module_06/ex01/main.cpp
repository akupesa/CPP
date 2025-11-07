/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:56:55 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/03 12:57:06 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data dat;

	dat.name = "Cristiano Ronaldo";

	uintptr_t raw = Serializer::serialize(&dat);
	std::cout << raw << std::endl;

	Data *point;

	point = reinterpret_cast<Data *>(raw);

	std::cout << point->name << std::endl;
}