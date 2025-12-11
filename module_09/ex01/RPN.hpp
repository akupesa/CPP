/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:24:59 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/09 14:25:01 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <cctype>
# include <ctype.h>
# include <sstream>
# include <iostream>

class RPN
{
	private:
		std::stack<int> mendes;
	public:
		RPN();
		RPN(const RPN& rpn);
		RPN& operator=(const RPN& rpn);
		~RPN();

		bool	is_valid(const std::string& av);
		void 	stack_in_stack_out(const std::string& av);
};
# endif // RPN_HPP
