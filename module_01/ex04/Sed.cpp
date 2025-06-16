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

bool	Sed::search_and_replace()
{
	bool		is_equal;

	size_t		counter;
	size_t		last_position;
	size_t		current_position;
	
	std::string	temp_file;
	std::string	lines_saver;
	std::string	modificated;


	std::ifstream input_file(filename.c_str());
	if (!input_file.is_open())
	{
		std::cout << "File not opened.\n";
		return (false);
	}

	std::string	out_file = filename + ".replace";
	std::ofstream output_file(out_file.c_str());
	if (!output_file.is_open())
	{
		std::cout << "File not created.\n";
		input_file.close();
		return (false);
	}

	while (getline(input_file, lines_saver))
	{
		counter = 0, current_position = 0, last_position = 0;
		while (current_position < lines_saver.length())
		{
			is_equal = true;
			while (counter < search.length() && current_position + counter < lines_saver.length())
			{
				if (lines_saver[current_position + counter] != search[counter])
				{
					is_equal = false;
					break;
				}
				++counter;
			}
			if (is_equal == true && search.length() > 0)
			{
				modificated += lines_saver.substr(last_position, current_position - last_position);
				modificated += replace;
				current_position += search.length();
				last_position = current_position;
			}
			else
				++current_position;
		}
		modificated += lines_saver.substr(last_position);
		output_file << modificated;
	}
	input_file.close();
	output_file.close();
	return (true);
}
