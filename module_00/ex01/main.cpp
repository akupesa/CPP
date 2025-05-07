/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:58:20 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/07 13:36:24 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libraries.hpp"

int main(void)
{
	/*std::cout << "ADD";
	std::cin >> lastName;*/
	Contact contact1("Maluco", " de 2030", "Cavalo", "935555500", "Sons altos");
	Contact contact2("leo", " de 2030", "lleodev", "935555500", "Bem mau");
	
	contact1.get_info();
	contact2.rename_prop(1, "Leonardo");
	contact2.rename_prop(3, "Jorge");
	contact2.get_info();
	return (0);
}
