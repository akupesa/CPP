/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:14:54 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/19 10:15:10 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called.\n";
	fixed_point = 0;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constructor called.\n";
	*this = fix;
}

Fixed&	Fixed::operator=(const Fixed& fix)
{
	std::cout << "Copy assignment operator called!" << std::endl;
	if (this != &fix)
		this->fixed_point = fix.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "destructor called.\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called.\n";
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}
