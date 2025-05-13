/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:20:57 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/09 12:56:16 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libraries.hpp"

int main(int ac, char **av)
{
	Contact		contacto(0, "firstName", "lastName" ,"nickName" ,"phoneNumber" ,"darkestSecret");
	PhoneBook	phonebook;

	(void)av;
	
	std::string	choice;
	std::string	lastName;
	std::string	nickName;
	std::string	firstName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	if (ac > 1)
	{
		std::cout << "Too many arguments, folk! It must be the name of the program, only!" << std::endl;
		return (1);
	}
	while(1)
	{
		std::cout << "------------------------------------------------------------------------\n";
		std::cout << "|And now, you have a place to save your contacts, Welcome to PhoneBook!|\n"
			<< "------------------------------------------------------------------------\n";
		std::cout << "Select one of the options below: \n" << std::endl
			<< "ADD - Save a new contact\n"
			<< "SEARCH - Search a created contact\n"
			<< "EXIT - Leave the PhoneBook\n"
			<< "> ";
		std::cin >> choice;
		if (choice == "ADD")
		{
			std::cin.ignore();
			do {
				std::cout << "First Name: ";
				std::getline(std::cin, firstName);
				if (firstName.length() == 0)
					std::cout << "Try again\n";
			} while (firstName.length() == 0);
			
			do {
				std::cout << "Last Name: ";
				std::getline(std::cin, lastName);
				if (lastName.length() == 0)
					std::cout << "Try again\n";
			} while (lastName.length() == 0);

			do {
				std::cout << "Nick Name: ";
				std::getline(std::cin, nickName);
				if (nickName.length() == 0)
					std::cout << "Try again\n";
			} while (nickName.length() == 0);

			do {
				std::cout << "Phone Number: ";
				std::getline(std::cin, phoneNumber);
				if (phoneNumber.length() == 0)
					std::cout << "Try again\n";
			} while (phoneNumber.length() == 0);

			do {
				std::cout << "Darkest Secret: ";
				std::getline(std::cin, darkestSecret);
				if (darkestSecret.length() == 0)
					std::cout << "Try again\n";
			} while (darkestSecret.length() == 0);

			Contact newContact(phonebook.index, firstName, lastName, nickName, phoneNumber, darkestSecret);
			phonebook.addContact(newContact);
		}
		else if (choice == "SEARCH")
			phonebook.searchContact();
		else if (choice == "EXIT")
		{
			std::cout << "Exiting PhoneBook!...\n";
			exit(0);
		}
		else
			std::cout << "Error: Invalid Option, Folk!\n\n";
	}
	return (0);
}
