/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:52:58 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/24 17:53:00 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <limits>
# include <vector>
# include <string>
# include <iostream>
# include <algorithm>
# include <exception>

class Span
{
	private:
		unsigned int N;
		class	MaxStorage : public std::exception {
			const char* what() const throw() {
				return ("Maximum storage reached!");
			}
		};
		class	EnoughStore : public std::exception {
			const char* what() const throw() {
				return ("Not enough numbers stored!");
			}
		};
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& spa);
		Span& operator=(const Span& spa);
		~Span();

		std::vector<int> store;

		void addNumber(int numb);
		
		int longestSpan();
		int shortestSpan();
		
		void addRange(std::vector<int>::iterator ini, std::vector<int>::iterator fim);
	};

#endif // SPAN_HPP
