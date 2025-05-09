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


void	Contact::get_info(void)
{
	std::cout << std::setw(10) << index << "|"
			<< std::setw(10) << (firstName) << "|"
			<< std::setw(10) << (lastName) << "|"
			<< std::setw(10) << (nickName) << "|"
			<< std::endl;
}
