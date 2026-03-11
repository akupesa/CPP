/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:07:11 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/15 14:07:12 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "Default constructor.\n";
}

PmergeMe::PmergeMe(const PmergeMe& pm)
{
	(void)pm;
	std::cout << "Copy constructor.\n";
}

PmergeMe& PmergeMe::operator=(const PmergeMe& pm)
{
	(void)pm;
	if (this != &pm)
		*this = pm;
	return (*this);
}

PmergeMe::~PmergeMe()
{
	std::cout << "Destructor.\n";
}

bool	PmergeMe::isDuplicate(const int& num) const
{
	for (size_t i = 0; i < this->dequeList.size(); i++)
	{
		if (this->dequeList[i] == num)
			return (true);
	}
	return (false);
}

bool	PmergeMe::isValidNum(const std::string& num) const
{
	char	*end = NULL;
	long	lnum = std::strtol(num.c_str(), &end, 10);

	if (*end == '\0' && lnum >= 0 && lnum <= std::numeric_limits<int>::max())
		return (true);
	return (false);
}

bool	PmergeMe::parseArgs(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		if (!this->isValidNum(av[i]))
		{
			std::cerr << "Error: invalid argument.\n";
			return (false);
		}
		int	num = atoi(av[i]);
		if (this->isDuplicate(num))
		{
			std::cerr << "Error: duplicate number.\n";
			return (false);
		}
		this->dequeList.push_back(num);
		this->vectorList.push_back(num);
	}
	return (true);
}

void	PmergeMe::dequeBinaryInsert(std::deque<int>& dq, int value)
{
	std::deque<int>::iterator	low = dq.begin();
	std::deque<int>::iterator	high = dq.end();

	while (low < high)
	{
		std::deque<int>::iterator	mid = low + (high - low) / 2;
		if (*mid < value)
			low = mid + 1;
		else
			high = mid;
	}
	dq.insert(low, value);
}

void	PmergeMe::dequeMergeInsert(std::deque<int>& dq, int start, int end)
{
	int	n = end - start;
	if (n <= 1)
		return ;

	std::deque<int>	main, pending;
	int				i = start;

	for (; i + 1 < end; i += 2)
	{
		if (dq[i] < dq[i + 1])
		{
			main.push_back(dq[i + 1]);
			pending.push_back(dq[i]);
		}
		else
		{
			main.push_back(dq[i]);
			pending.push_back(dq[i + 1]);
		}
	}

	bool	hasOdd = (i < end);
	int		oddElem = 0;

	if (hasOdd)
		oddElem = dq[i];

	this->dequeMergeInsert(main, 0, static_cast<int>(main.size()));

	std::deque<int>		result = main;
	std::vector<bool>	inserted(pending.size(), false);
	int					k = 1;

	while (true)
	{
		int	idx = this->jacobsthal(k++) - 1;
		if (idx >= static_cast<int>(pending.size()))
			break ;
		if (idx < 0)
			continue ;
		if (!inserted[idx])
		{
			this->dequeBinaryInsert(result, pending[idx]);
			inserted[idx] = true;
		}
	}
	for (int j = static_cast<int>(pending.size()) - 1; j >= 0; --j)
	{
		if (!inserted[j])
			this->dequeBinaryInsert(result, pending[j]);
	}
	if (hasOdd)
		this->dequeBinaryInsert(result, oddElem);
	std::copy(result.begin(), result.end(), dq.begin() + start);
}

void	PmergeMe::vectorBinaryInsert(std::vector<int>& vec, int value)
{
	std::vector<int>::iterator	low = vec.begin();
	std::vector<int>::iterator	high = vec.end();

	while (low < high)
	{
		std::vector<int>::iterator	mid = low + (high - low) / 2;
		if (*mid < value)
			low = mid + 1;
		else
			high = mid;
	}
	vec.insert(low, value);
}

void	PmergeMe::vectorMergeInsert(std::vector<int>& vec, int start, int end)
{
	int	n = end - start;
	if (n <= 1)
		return ;

	std::vector<int>	main, pending;
	int					i = start;

	for (; i + 1 < end; i += 2)
	{
		if (vec[i] < vec[i + 1])
		{
			main.push_back(vec[i + 1]);
			pending.push_back(vec[i]);
		}
		else
		{
			main.push_back(vec[i]);
			pending.push_back(vec[i + 1]);
		}
	}

	bool	hasOdd = (i < end);
	int		oddElem = 0;

	if (hasOdd)
		oddElem = vec[i];

	this->vectorMergeInsert(main, 0, static_cast<int>(main.size()));

	std::vector<int>	result = main;
	std::vector<bool>	inserted(pending.size(), false);
	int					k = 1;

	while (true)
	{
		int	idx = this->jacobsthal(k++) - 1;
		if (idx >= static_cast<int>(pending.size()))
			break ;
		if (idx < 0)
			continue ;
		if (!inserted[idx])
		{
			this->vectorBinaryInsert(result, pending[idx]);
			inserted[idx] = true;
		}
	}
	for (int j = static_cast<int>(pending.size()) - 1; j >= 0; --j)
	{
		if (!inserted[j])
			this->vectorBinaryInsert(result, pending[j]);
	}
	if (hasOdd)
		this->vectorBinaryInsert(result, oddElem);
	std::copy(result.begin(), result.end(), vec.begin() + start);
}

int		PmergeMe::jacobsthal(int n) const
{
	if (n == 0 || n == 1)
		return (n);

	int	a = 0, b = 1;
	for (int i = 2; i <= n; i++)
	{
		int	next = b + 2 * a;
		a = b;
		b = next;
	}
	return (b);
}

void	PmergeMe::startSort()
{
	std::cout << "Before: ";
	this->printContainer(this->dequeList);

	clock_t	initTime = clock();
	this->dequeMergeInsert(this->dequeList, 0, static_cast<int>(this->dequeList.size()));
	clock_t	dequeTime = clock() - initTime;

	initTime = clock();
	this->vectorMergeInsert(this->vectorList, 0, static_cast<int>(this->vectorList.size()));
	clock_t	vectorTime = clock() - initTime;

	std::cout << "After: ";
	this->printContainer(this->vectorList);

	std::cout << "Time to process a range of " << this->dequeList.size()
		<< " elements with std::deque : "
		<< (static_cast<double>(dequeTime) / CLOCKS_PER_SEC * 1000) << " ms" << std::endl;
	std::cout << "Time to process a range of " << this->vectorList.size()
		<< " elements with std::vector : "
		<< (static_cast<double>(vectorTime) / CLOCKS_PER_SEC * 1000) << " ms" << std::endl;
}

const std::deque<int>&	PmergeMe::getDeque() const
{
	return (this->dequeList);
}

const std::vector<int>&	PmergeMe::getVector() const
{
	return (this->vectorList);
}

int		PmergeMe::run(int ac, char **av)
{
	if (!this->parseArgs(ac, av))
		return (1);
	this->startSort();
	return (0);
}
