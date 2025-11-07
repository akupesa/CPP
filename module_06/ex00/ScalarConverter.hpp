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

# define F_INT_MIN -2147483647 
# define F_INT_MAX 2147483647

# include <cmath>
# include <limits>
# include <cctype>
# include <string>
# include <iomanip>
# include <climits>
# include <ctype.h>
# include <cstdlib>
# include <iostream>


class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& sc);
		ScalarConverter& operator=(const ScalarConverter& sc);
		~ScalarConverter();
	public:
		static void	convert(std::string av);
};

#endif // SCALARCONVERTER_HPP
