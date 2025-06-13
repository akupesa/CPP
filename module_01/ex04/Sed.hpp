/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:13:51 by akupesa           #+#    #+#             */
/*   Updated: 2025/06/13 10:31:01 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <string>
# include <fstream>
# include <iostream>

class Sed 
{
	private:
		std::string	s1;
std::string	s2;
		std::string	file;
	public:
		std::string	read_file(std::string file);

	Sed();
		Sed(std::string file, std::string s1, std::string s2);
		~Sed();
};

#endif
