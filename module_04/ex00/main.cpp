/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 08:21:25 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 13:08:39 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	const Animal*	ani = new Animal();
	const Animal*	cat = new Cat();
	const Animal*	dog = new Dog();

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	delete ani;
	delete cat;
	delete dog;

	std::cout << "--------------------------------" << std::endl;

	const WrongAnimal*	wani = new WrongAnimal();
	const WrongAnimal*	wcat = new WrongCat();

	std::cout << wcat->getType() << " " << std::endl;
	wcat->makeSound();
	wani->makeSound();

	delete wani;
	delete wcat;

	return (0);
}
