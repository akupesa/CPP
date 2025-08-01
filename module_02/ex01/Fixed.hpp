/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 08:45:03 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/03 11:33:26 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class	Fixed
{
	private:
		int			fixed_point;
		static const int	frac_bits = 8;
	public:
		int	toInt(void) const;
		float	toFloat(void) const;

		Fixed();
		Fixed(const int int_point);
		Fixed(const float float_point);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
};
	std::ostream& operator<<(std::ostream& os, const Fixed& fixedObj);

#endif // FIXED_HPP
