/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:39:15 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/05 10:39:16 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
	std::cout << "Base Constructor.\n";
}

Base::~Base()
{
	std::cout << "Base destructor\n";
}

Base* 	Base::generate(void)
{
	int	choice = std::rand() % 3;

	if (choice == 0)
	{
		std::cout << "A generated.\n";
		return (new A);
	}
	else if (choice == 1)
	{
		std::cout << "B generated.\n";
		return (new B);
	}
	else
	{
		std::cout << "C generated.\n";
		return (new C);
	}
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	dynamic_cast<A&>(p);
	std::cout << "A\n";

	dynamic_cast<B&>(p);
	std::cout << "B\n";

	dynamic_cast<C&>(p);
	std::cout << "C\n";
}