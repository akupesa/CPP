/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:24:54 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/09 14:24:56 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	std::cout << "Constructor.\n";
}

RPN::RPN(const RPN& rpn)
{
	(void)rpn;
	std::cout << "Copy constructor.\n";
}

RPN& RPN::operator=(const RPN& rpn)
{
	(void)rpn;

	if (this != &rpn)
		*this = rpn;
	return (*this);
}

RPN::~RPN()
{
	std::cout << "Destructor.\n";
}

bool	RPN::is_valid(const std::string& av)
{
	std::string		token;
	std::istringstream 	iss(av);

	while (iss >> token)
	{
		if (token == "+" || token == "-" || token == "*" || token == "/")
			continue;
		if (token.size() == 1 && std::isdigit(token[0]) && token[0] >= '0' && token[0] <= '9')
			continue;
		return (false);
	}
	return (true);
}

void	RPN::stack_in_stack_out(const std::string& av)
{
	int			res;
	std::string		token;
	std::istringstream	iss(av);

	while (iss >> token)
	{
		if (token == " ")
			continue;
		else if (isdigit(token[0]))
			this->mendes.push(token[0] - '0');
		else if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (this->mendes.size() >= 2)
			{
				int b = this->mendes.top();
				this->mendes.pop();
				int a = this->mendes.top();
				this->mendes.pop();

				if (token == "+")
					res = a + b;
				else if (token == "-")
					res = a - b;
				else if (token == "*")
					res = a * b;
				else if (token == "/")
				{
					if (b == 0)
					{
						std::cout << "Error: Cannot operate a division by zero.\n";
						return ;
					}
					res = a / b;
				}
				this->mendes.push(res);
			}
			else
			{
				std::cout << "Error: Invalid token -> " << token << std::endl;
				return ;
			}
		}
		/*if (this->mendes.size() != 1)
		{
			std::cout << "Error: Invalid expression.\n";
			return ;
		}*/
	}
	std::cout << this->mendes.top() << std::endl;
}