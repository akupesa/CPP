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

void	test_01()
{
	std::cout << "TEST 01" << std::endl;

	const Animal*	ani = new Animal();
	const Animal*	cat = new Cat();
	const Animal*	dog = new Dog();

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	ani->makeSound();
	delete (ani);
	delete (cat);
	delete (dog);
}

void	test_02()
{
	std::cout << "TEST 02" << std::endl;

	const WrongAnimal*	wani = new WrongAnimal();
	const WrongAnimal*	wcat = new WrongCat();

	std::cout << wani->getType() << " " << std::endl; // without a default type like cat or dog
	std::cout << wcat->getType() << " " << std::endl;
	wcat->makeSound();
	wani->makeSound();

	delete (wani);
	delete (wcat);
}

void	test_03()
{
	std::cout << "TEST 03" << std::endl;

	Animal	ani("animal");
	Cat	cat("gato");
	Dog	dog("cão");

	ani.makeSoundWithType();
	cat.makeSoundWithType();
	dog.makeSoundWithType();
}

void	test_04()
{
	std::cout << "TEST 04" << std::endl;
	
	const Animal*		random = new Cat;
	const WrongAnimal*	modnar = new WrongCat;

	std::cout << random->getType() << " ";
	random->makeSound();
	modnar->makeSoundWithType();

	delete (random);
	delete (modnar);
}

int	main(void)
{
	test_01();
	std::cout << "---------------------------------------" << std::endl;
	test_02();
	std::cout << "---------------------------------------" << std::endl;
	test_03();
	std::cout << "---------------------------------------" << std::endl;
	test_04();
	std::cout << "---------------------------------------" << std::endl;
	
	return (0);
}
