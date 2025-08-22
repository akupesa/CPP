/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:26:14 by akupesa           #+#    #+#             */
/*   Updated: 2025/07/23 18:48:23 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

void	test_01()
{
	std::cout << "TEST 01" << std::endl;

	const Animal*	cat = new Cat();
	const Animal*	dog = new Dog();

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
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

	Cat	cat("gato");
	Dog	dog("cão");

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

void	dogs()
{
	std::cout << "Dog Time - TEST 5" << std::endl;

	Dog	dog, dog1;
	int	index = -1;

	dog.getBrain().setBrain("Auuuuuuu", ++index);
	std::cout << dog.getType() << " " << dog.getBrain().getBrain(index) << std::endl;
	dog1.getBrain().setBrain("Au Au Au Au", ++index);
	std::cout << dog1.getType() << " " << dog1.getBrain().getBrain(index) << std::endl;
}

void	cats()
{
	std::cout << "Cat Time - TEST 6" << std::endl;

	Cat	cat, cat1;
	int	index = -1;

	cat.getBrain().setBrain("Miiiiiiau", ++index);
	std::cout << cat.getType() << " " << cat.getBrain().getBrain(index) << std::endl;
	cat1.getBrain().setBrain("Meow Meow Meow", ++index);
	std::cout << cat1.getType() << " " << cat1.getBrain().getBrain(index) << std::endl;
}

void	animalArray()
{
	std::cout << "Animal Time - TEST 7" << std::endl;

	int	i = -1;
	int	size = 8;
	Animal*	animal[8];

	std::cout << size / 2 << " Dogs will be created." << std::endl;
	std::cout << size / 2 << " Cats will be created." << std::endl;
	while (++i < size)
	{
		if (i % 2 == 0)
		{
			animal[i] = new Dog();
			animal[i]->makeSoundWithType();
		}
		else
		{
			animal[i] = new Cat();
			animal[i]->makeSoundWithType();
		}
	}
	i = -1;
	while (++i < size)
		delete (animal[i]);
}

int	main(void)
{
	test_01();
	std::cout << "-----------------------------------" << std::endl;
	test_02();
	std::cout << "-----------------------------------" << std::endl;
	test_03();
	std::cout << "-----------------------------------" << std::endl;
	test_04();
	std::cout << "-----------------------------------" << std::endl;
	dogs();
	std::cout << "-----------------------------------" << std::endl;
	cats();
	std::cout << "-----------------------------------" << std::endl;
	animalArray();
	std::cout << "-----------------------------------" << std::endl;
	
	return (0);
}
