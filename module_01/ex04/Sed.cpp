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

Sed::Sed(const std::string& filename, const std::string& search, const std::string& replace)
{
	this->filename = filename;
	this->search = search;
	this->replace = replace;
}

Sed::~Sed() {}

std::string	Sed::replace_string(std::string& modificated)
{
	size_t	position;
	size_t	ini_position = 0;
	std::string	result;

	position = modificated.find(Sed::search, 0);
	while (position != (size_t)-1)
	{
		result += modificated.substr(ini_position, position - ini_position) + Sed::replace;
		ini_position = position + Sed::search.length();
		position = modificated.find(Sed::search, position + 1);
	}
	result += modificated.substr(ini_position);
	return (result);
}

bool	Sed::search_and_replace()
{
	
	std::string	lines_saver;
	std::string	modificated;

	std::ifstream input_file(filename.c_str());
	if (!input_file.is_open())
	{
		std::cout << "File not opened.\n";
		exit (1);
		return (false);
	}

	std::ofstream output_file((filename + ".replace").c_str());
	if (!output_file.is_open())
	{
		std::cout << "File not created.\n";
		input_file.close();
		return (false);
	}

	while (getline(input_file, lines_saver))
		modificated += lines_saver + "\n";
	output_file << Sed::replace_string(modificated);
	input_file.close();
	output_file.close();
	return (true);
}
