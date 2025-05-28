/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:41:55 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/09 13:56:14 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libraries.hpp"
#include "PhoneBook.hpp"

Contact::Contact(){}

Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->index = index;
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

std::string	truncateLine(std::string property)
{
	if (property.length() > 10)
	{
		property = property.substr(0, 9) + '.';
	}
	return (property);
}

void	Contact::get_info(void)
{
	std::cout << std::setw(10) << index << "|"
			<< std::setw(10) << truncateLine(firstName) << "|"
			<< std::setw(10) << truncateLine(lastName) << "|"
			<< std::setw(10) << truncateLine(nickName) << "|"
			<< std::endl;
}

void	Contact::get_full_info(void)
{
	std::cout << "First Name: " << firstName << "\n";
	std::cout << "Last Name: " << lastName << "\n";
	std::cout << "Nick Name: " << nickName << "\n";
	std::cout << "Phone Number: " << phoneNumber << "\n";
	std::cout << "Darkest Secret: " << darkestSecret << "\n";
	std::cout << std::endl;
}
