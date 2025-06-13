/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:13:44 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/13 09:25:33 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(){}

Sed::Sed(std::string file, std::string s1, std::string s2)
{
	this->file = file;
	this->s1 = s1;
	this->s2 = s2;
}

Sed::~Sed(){}

std::string	Sed::read_file(std::string file, std::string s1, std::string s2)
{
	ifstream (file);

}
