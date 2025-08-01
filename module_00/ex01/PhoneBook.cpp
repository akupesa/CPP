/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 09:45:40 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/13 15:29:09 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libraries.hpp"

PhoneBook::PhoneBook()
{
	this->indexP = 0;
	this->savedContacts = 0;
}

int	PhoneBook::getIndex()
{
	return (this->indexP);
}

void	PhoneBook::setIndex(int indexP)
{
	this->indexP = indexP;
}

void	PhoneBook::addContact(Contact contact)
{

	if (this->savedContacts == 8)
		std::cout << "Your Agenda is full, the latest contact will be replaced.\n";
	PhoneBook::contacts[PhoneBook::indexP % 8] = contact;
	if (this->indexP == 7)
		this->indexP = this->indexP - 7;
	else
		this->indexP++;
	if (PhoneBook::savedContacts < 8)
		PhoneBook::savedContacts++;
	std::cout << "Contact saved!\n" << std::endl;
}

void	PhoneBook::show_contact(void)
{
	int		num;
	std::string	aux;

	std::cout << "Insert an index to show the contact's information.\n";
	while (1)
	{
		do {
			std::cout << "> ";
			getline(std::cin, aux);
			if (PhoneBook::isNumber(aux) == false)
			{
				std::cout << "Try again.\n";
				continue ;
			}
			num = std::atoi(aux.c_str());
			if (!(num >= 0 && num < PhoneBook::savedContacts))
				std::cout << "Try again.\n";
		} while (!(num >= 0 && num < PhoneBook::savedContacts));
		std::cout << std::endl;
		PhoneBook::contacts[num].get_full_info();
		break ;
	}
}

bool	PhoneBook::isletter(std::string letter)
{
	int	i = 0;

	while (letter[i])
		if (!std::isalpha(letter[i++]))
			return (false);
	return (true);
}

bool	PhoneBook::isNumber(std::string number)
{
	int	i = 0;
	
	if (number[0] == '+')
		i++;
	while (number[i])
		if (!std::isdigit(number[i++]))
			return (false);
	return (true);
}

void	PhoneBook::searchContact(void)
{
	int		index = 0;
	std::string	choice;
	
	if (PhoneBook::savedContacts == 0)
	{
		std::cout << "Your Agenda is empty, add a contact and try again.\n";
		return ;
	}
	std::cout << "--------------------------------------------\n";
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|";
	std::cout << std::endl;
	std::cout << "--------------------------------------------\n";
	while (index < PhoneBook::savedContacts)
	{
		PhoneBook::contacts[index].get_info();
		index++;
		std::cout << "--------------------------------------------\n";

	}
	std::cout << "Do you want to see a contact's details? Type \"Yes\" or \"No\".\n> ";
	getline(std::cin, choice);
	if (choice == "YES" || choice == "yes" || choice == "Yes")
	{
		show_contact();
	}
	else if (choice == "NO" || choice == "no" || choice == "No")
		return ;
	else
	{
		std::cout << "Try again.\n";
		return ;
	}
}
