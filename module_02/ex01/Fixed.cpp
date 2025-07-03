/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 08:44:44 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/03 11:33:42 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called!" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const int int_point)
{
	std::cout << "int constructor called!" << std::endl;
	this->fixed_point = (int_point << this->frac_bits);
}

Fixed::Fixed(const float float_point)
{
	std::cout << "float constructor called!" << std::endl;
	this->fixed_point = static_cast<int>(roundf(float_point));
}


Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called!" << std::endl;
	this->fixed_point = other.fixed_point;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->fixed_point = other.fixed_point;
	std::cout << "Copy assignment operator called!" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called!" << std::endl;
}

int	Fixed::getValue()
{
	return (fixed_point);
}

int	Fixed::toInt() const
{
	return (this->fixed_point >> this->frac_bits);
}

float	Fixed::toFloat() const
{
	return (static_cast<float>(this->fixed_point));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixedObj)
{
	os << fixedObj.toInt() << fixedObj.toFloat();

	return (os);
}


