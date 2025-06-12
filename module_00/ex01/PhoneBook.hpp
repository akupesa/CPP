/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:11:05 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/09 10:40:55 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <cctype>
# include <iomanip>
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		int	indexP;
		int	savedContacts;

		Contact contacts[8];

	public:
		int	getIndex();

		bool	isletter(std::string letter);
		bool	isNumber(std::string number);
		
		void	show_contact(void);
		void	searchContact(void);	
		void	get_full_info(void);
		void	setIndex(int indexP);
		void	addContact(Contact contact);
		PhoneBook();
};

#endif
