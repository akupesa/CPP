/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:02:27 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/07 13:56:01 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string lastName, std::string nickName, std::string firstName, std::string phoneNumber, std::string darkestSecret)
{
	this->lastName = lastName;
	this->nickName = nickName;
	this->firstName = firstName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

void Contact::get_info()
{
	std::cout << "1. First Name: " << this->firstName << "\n";
	std::cout << "2. Nick Name: " << this->nickName << "\n";
	std::cout << "3. Last Name: " << this->lastName << "\n";
	std::cout << "4. Phone Number: " << this->phoneNumber << "\n";
	std::cout << "5. Darkest Secret: " << this->darkestSecret << "\n";
	std::cout << "------------------------------------------------\n";
}

void	Contact::rename_prop(int i, std::string newName)
{
	if (i > 0 && i < 6)
	{
		if (i == 1)
			this->firstName = newName;
		else if (i == 2)
			this->nickName = newName;
		else if (i == 3)
			this->lastName = newName;
		else if (i == 4)
			this->phoneNumber = newName;
		else
			this->darkestSecret = newName;
	}
}
