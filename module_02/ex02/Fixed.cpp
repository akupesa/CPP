/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:06:02 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/04 11:06:19 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <ostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called!" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const int int_point)
{
	std::cout << "Int constructor called!" << std::endl;
	this->fixed_point = int_point << this->frac_bits;
}

Fixed::Fixed(const float float_point)
{
	std::cout << "Float constructor called!" << std::endl;
	this->fixed_point = roundf(float_point * (1 << this->frac_bits));
}

Fixed::Fixed(const Fixed& side)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = side;
}

Fixed& Fixed::operator=(const Fixed& side)
{
	std::cout << "Copy assignment operator called!" << std::endl;
	if (this != &side)
		this->fixed_point = side.fixed_point;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed& side)
{
	Fixed	obj;

	obj.fixed_point = this->fixed_point + side.fixed_point;
	return (obj);
}

Fixed	Fixed::operator-(const Fixed& side)
{
	Fixed	obj;

	obj.fixed_point = this->fixed_point - side.fixed_point;
	return (obj);
}

Fixed	Fixed::operator*(const Fixed& side)
{
	Fixed	obj;

	obj.fixed_point = this->fixed_point * side.fixed_point / (1 << this->frac_bits);
	return (obj);
}

Fixed	Fixed::operator/(const Fixed& side)
{
	Fixed	obj;

	if (side.fixed_point == 0)
	{
		std::cout << "Can't do division by 0." << std::endl;
		return (0);
	}
	obj.fixed_point = this->fixed_point / side.fixed_point * (1 << this->frac_bits);
	return (obj);
}

bool Fixed::operator>(const Fixed& side)
{
	if (this->fixed_point > side.fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& side)
{
	if (this->fixed_point < side.fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& side)
{
	if (this->fixed_point >= side.fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& side)
{
	if (this->fixed_point >= side.fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& side)
{
	if (this->fixed_point == side.fixed_point)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& side)
{
	if (this->fixed_point != side.fixed_point)
		return (true);
	return (false);
}

Fixed&	Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	obj(*this);

	this->fixed_point++;
	return (obj);
}

Fixed&	Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	obj(*this);

	this->fixed_point--;
	return (obj);
}

const Fixed&	Fixed::min(Fixed& one, Fixed& two)
{
	if (&one > &two)
		return (two);
	return (one);
}

const Fixed&	Fixed::min(const Fixed& one, const Fixed& two)
{
	if (&one > &two)
		return (two);
	return (one);
}

const Fixed&	Fixed::max(Fixed& one, Fixed& two)
{
	if (&one < &two)
		return (two);
	return (one);
}

const Fixed&	Fixed::max(const Fixed& one, const Fixed& two)
{
	if (&one < &two)
		return (two);
	return (one);
}

int	Fixed::toInt() const
{
	return (this->fixed_point >> this->frac_bits);
}

float	Fixed::toFloat() const
{
	return (static_cast<float>(this->fixed_point) / (1 << this->frac_bits));
}
Fixed::~Fixed()
{
	std::cout << "Destructor called!" << std::endl;
}

std::ostream&	operator<<(std::ostream& side, const Fixed& FixedObj)
{
	side << FixedObj.toFloat();
	return (side);
}
