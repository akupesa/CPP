/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:09:35 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/24 15:33:54 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <cmath>
# include <ctype.h>
# include <cctype>
# include <string>
# include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& sc);
		ScalarConverter& operator=(const ScalarConverter& sc);
		~ScalarConverter();

		int	detector(std::string av);
		void	intConverter();
		void	charConverter();
		void	floatConverter();
		void	doubleConverter();

		static void	convert(std::string av);
};

#endif // SCALARCONVERTER_HPP
