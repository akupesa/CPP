/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 09:45:40 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/09 13:57:29 by akupesa          ###   ########.fr       */
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
	PhoneBook::contacts[PhoneBook::index] = contact;
	PhoneBook::index++;
	PhoneBook::savedContacts++;
	std::cout << "Contact saved!\n" << std::endl;
}

void	PhoneBook::searchContact(void)
{
	int	index = 0;

	std::cout << index << "|";
	std::cout << "firstName" << "|";
	std::cout << "lastName" << "|";
	std::cout << "nickName" << "|";
	std::cout << "phoneNumber" << "|";
	std::cout << "darkestSecret" << "|" << std::endl;

	while (index < PhoneBook::savedContacts)
	{
		PhoneBook::contacts[index].get_info();
		index++;
		std::cout << "----------------------------------------------------------------------------------------------------------------------------------------------------\n";
	}
}
