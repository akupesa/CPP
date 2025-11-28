/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:52:54 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/24 17:52:56 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iterator>

Span::Span()
{
	std::cout << "Default constructor.\n";
	this->N = 0;
}

Span::Span(unsigned int N)
{
	std::cout << "Parameterized constructor\n";
	this->N = N;
}

Span::Span(const Span& spa)
{
	std::cout << "Copy constructor\n";
	this->N = spa.N;
}

Span& Span::operator=(const Span& spa)
{
	std::cout << "Copy assignment operator.\n";
	if (this != &spa)
		this->N = spa.N;
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor\n";
}

void	Span::addNumber(int numb)
{
	if (store.size() > this->N)
		throw MaxStorage();
	this->store.push_back(numb);
}
int	Span::shortestSpan()
{
	if (this->store.size() < 2)
		throw EnoughStore();
	std::sort(this->store.begin(), this->store.end());

	std::vector<int>::iterator iter = store.begin();
	std::vector<int>::iterator next = iter;
	++next;

	int span = std::numeric_limits<int>::max();
	while (next != this->store.end())
	{
		int diff = *next - *iter;
		if (diff < span)
			span = diff;
		++next;
		++iter;
	}
	return (span);
}

int	Span::longestSpan()
{
	int min, max, span;

	if (this->store.size() < 2)
		throw EnoughStore();
	min = *std::min_element(this->store.begin(), this->store.end());
	max = *std::max_element(this->store.begin(), this->store.end());
	span = max - min;

	return (span);
}

void	Span::addRange(std::vector<int>::iterator beginn, std::vector<int>::iterator endd)
{
	if (store.size() >= N)
		throw MaxStorage();
	if (store.size() + std::distance(beginn, endd) > N)
		throw EnoughStore();
	this->store.insert(this->store.end(), beginn, endd);
}
