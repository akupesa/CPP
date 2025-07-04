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

class	Fixed
{
	private:
		
	public:
		Fixed();
		Fixed(const Fixed& side);
		Fixed operator+(const Fixed& side);
		Fixed operator-(const Fixed& side);
		Fixed operator*(const Fixed& side);
		Fixed operator/(const Fixed& side);
		
		bool operator>(const Fixed& side);
		bool operator<(const Fixed& side);
		bool operator>=(const Fixed& side);
		bool operator<=(const Fixed& side);
		bool operator==(const Fixed& side);
		bool operator!=(const Fixed& side);

		~Fixed();

		static int	min(int &fixed_one, int &fixed_two);
		static int	min(const int &fixed_one, const int &fixed_two);

		static int	max(int &fixed_one, int &fixed_two);
		static int	max(const int &fixed_one, const int &fixed_two);
};

#endif //FIXED_HPP
