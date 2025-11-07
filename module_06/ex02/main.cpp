/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:38:48 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/05 10:38:52 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	std::srand(static_cast<unsigned>(std::time(0)));

    		// Test with pointers
	std::cout << "=== Testing with pointers ===" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		Base* obj = generate();
		identify(obj);
		delete obj;
		std::cout << "---" << std::endl;
	}

		// Test with references
	std::cout << "\n=== Testing with references ===" << std::endl;
	Base* objs[3] = {new A, new B, new C};
	for (int i = 0; i < 3; ++i)
	{
		identify(*objs[i]);
		delete objs[i];
	}

	return 0;
}