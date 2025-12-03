/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:11:15 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/01 12:52:24 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <stack>
# include <vector>
# include <string>
# include <iostream>
# include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator Iterator;

		MutantStack();
		MutantStack(const MutantStack& ms);
		MutantStack& operator=(const MutantStack& ms);
		~MutantStack();

		Iterator getBegin();
		Iterator getEnd();
};

#include "MutantStack.tpp"
#endif // !MUTANTSTACK_HPP
