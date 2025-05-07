/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:56:11 by akupesa           #+#    #+#             */
/*   Updated: 2025/05/07 13:17:31 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <string>
#include <iostream>
#include <algorithm>


class	Contact 
{
	private:
		int		index;

		std::string	lastName;
		std::string	nickName;
		std::string	firstName;
		std::string 	phoneNumber;
		std::string	darkestSecret;

	public:
		Contact(std::string lastName, std::string nickName, std::string firstName, std::string phoneNumber, std::string darkestSecret);
		void	get_info(void);
		void	rename_prop(int i, std::string newName);
};

#endif
