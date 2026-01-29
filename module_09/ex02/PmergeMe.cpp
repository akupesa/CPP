/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:23:25 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/09 18:23:26 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "Default constructor.\n";
}

PmergeMe::PmergeMe(const PmergeMe& pmm)
{
	std::cout << "Copy constructor.\n";
	*this = pmm;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& pmm)
{
	if (this != &pmm)
	{
		std::cout << "Copy assignment operator.\n";
		*this = pmm;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
	std::cout << "Destructor.\n";
}

