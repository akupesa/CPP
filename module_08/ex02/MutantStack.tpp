/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:11:02 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/01 12:54:19 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
	std::cout << "Default constructor.\n";
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& ms) : std::stack<T, Container>(ms)
{
	std::cout << "Copy constructor.\n";
}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& ms)
{
	if (this != &ms)
		std::stack<T, Container>::operator=(ms);
	return (*this);
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	std::cout << "Destructor.\n";
}

template <typename T, typename Container>
typename MutantStack<T, Container>::Iterator
MutantStack<T, Container>::getBegin()
{
	return (this->c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::Iterator
MutantStack<T, Container>::getEnd()
{
	return (this->c.end());
}