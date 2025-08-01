/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:17:16 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/03 11:28:13 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed	a;
	Fixed	const b(10);
	Fixed	const c(42.42f);
	Fixed	const d = b;

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as intenger" << std::endl;
	std::cout << "b is " << b.toInt() << " as intenger" << std::endl;
	std::cout << "c is " << c.toInt() << " as intenger" << std::endl;
	std::cout << "d is " << d.toInt() << " as intenger" << std::endl;


	return (0);
}
