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
	this->index = 0;
	this->savedContacts = 0;
}

void	PhoneBook::addContact(Contact contact)
{

	if (this->savedContacts == 8)
		std::cout << "Your Agenda is full, the latest contact will be replaced.\n";
	PhoneBook::contacts[PhoneBook::index % 8] = contact;
	if (this->index == 7)
		this->index = this->index - 7;
	else
		this->index++;
	if (PhoneBook::savedContacts < 8)
		PhoneBook::savedContacts++;
	std::cout << "Contact saved!\n" << std::endl;
}

void	PhoneBook::show_contact(void)
{
	int	num = 0;

	std::cout << "Insert an index to show the contact's information.\n";
	while (1)
	{
		do {
			std::cout << "> ";
			std::cin >> num;
			if (!(num >= 0 && num <= 7))
				std::cout << "Try again\n";
		} while (!(num >= 0 && num <= 7));
		std::cout << std::endl;
		PhoneBook::contacts[num].get_full_info();
		break ;
	}
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
	int	index = 0;

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
		std::cout << std::endl;
	}
	show_contact();
}
