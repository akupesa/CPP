/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:23:18 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/31 15:23:28 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <cstdint>

Serializer::Serializer()
{
	std::cout << "Default constructor.\n";
}

Serializer::Serializer(const Serializer& ser)
{
	(void)ser;
	std::cout << "Copy constructor.\n";
}

Serializer& Serializer::operator=(const Serializer& ser)
{
	(void)ser;
	std::cout << "Assignment operator.\n";
	return (*this);
}

Serializer::~Serializer()
{
	std::cout << "Destructor.\n";
}

uintptr_t Serializer::serialize(Data *point)
{
	return (reinterpret_cast<uintptr_t>(point));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
