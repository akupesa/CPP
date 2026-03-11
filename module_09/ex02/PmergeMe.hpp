/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:07:14 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/15 14:07:15 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <ctime>
# include <deque>
# include <limits>
# include <string>
# include <vector>
# include <cstdlib>
# include <iostream>

class PmergeMe
{
	private:
		std::deque<int>		dequeList;
		std::vector<int>	vectorList;

		bool	isDuplicate(const int& num) const;
		bool	isValidNum(const std::string& num) const;
		bool	parseArgs(int ac, char **av);

		void	dequeMergeInsert(std::deque<int>& dq, int start, int end);
		void	dequeBinaryInsert(std::deque<int>& dq, int value);

		void	vectorMergeInsert(std::vector<int>& vec, int start, int end);
		void	vectorBinaryInsert(std::vector<int>& vec, int value);

		int		jacobsthal(int n) const;
		void	startSort();

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& pm);
		PmergeMe& operator=(const PmergeMe& pm);
		~PmergeMe();

		const std::deque<int>&	getDeque() const;
		const std::vector<int>&	getVector() const;

		template <typename T>
		void	printContainer(const T& container) const
		{
			for (size_t i = 0; i < container.size(); i++)
				std::cout << container[i] << " ";
			std::cout << std::endl;
		}

		int		run(int ac, char **av);
};

#endif // PMERGEME_HPP
