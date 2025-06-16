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
# include <cstdio>
# include <fstream>
# include <iostream>

class Sed 
{
	private:
		std::string	search;
		std::string	replace;
		std::string	filename;
	public:
		bool	search_and_replace();

		Sed();
		Sed(const std::string& filename, const std::string& search, const std::string& replace);
		~Sed();
};

#endif
