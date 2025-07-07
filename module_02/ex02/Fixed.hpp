/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:06:36 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/04 13:42:33 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>
#include <ostream>

class	Fixed
{
	private:
		int			fixed_point;
		static const int	frac_bits = 8;
		
	public:
		int	toInt() const;
		float	toFloat() const;

		Fixed();
		Fixed(const Fixed& side);
		Fixed& operator=(const Fixed& side);
		Fixed(const int int_point);
		Fixed(const float float_point);

		Fixed	operator+(const Fixed& side);
		Fixed	operator-(const Fixed& side);
		Fixed	operator*(const Fixed& side);
		Fixed	operator/(const Fixed& side);
		
		bool	operator>(const Fixed& side);
		bool	operator<(const Fixed& side);
		bool	operator>=(const Fixed& side);
		bool	operator<=(const Fixed& side);
		bool	operator==(const Fixed& side);
		bool	operator!=(const Fixed& side);

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		~Fixed();

		static const Fixed&	min(Fixed& one, Fixed& two);
		static const Fixed&	min(const Fixed& one, const Fixed& two);

		static const Fixed&	max(Fixed& one, Fixed& two);
		static const Fixed&	max(const Fixed& one, const Fixed& two);

};

std::ostream&	operator<<(std::ostream& side, const Fixed& FixedObj);

#endif //FIXED_HPP
