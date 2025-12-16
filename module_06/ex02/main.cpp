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
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

int main()
{
	std::srand(std::time(0));
    		
	std::cout << "=== Testing with pointers ===" << std::endl;
	Base* obj = generate();
	identify(obj);
	delete obj;
	std::cout << "---" << std::endl;

		
	std::cout << "\n=== Testing with references ===" << std::endl;
	for (int i = 0; i < 3; ++i)
	{
		Base *obj = generate();
		identify(*obj);
		delete obj;
	}

	return 0;
}
