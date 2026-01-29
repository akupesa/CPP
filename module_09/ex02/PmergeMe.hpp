/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:23:29 by akupesa           #+#    #+#             */
/*   Updated: 2025/12/09 18:23:31 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <ctime>
# include <deque>
# include <vector>
# include <limits>
# include <cstdlib>
# include <iostream>

# define MINIMUN 16
# define INT_MAX std::numeric_limits<int>::max()

typedef std::string		string;
typedef std::deque<int>		deque;
typedef std::vector<int>	vector;

class PmergeMe
{
	private:
		deque	_deq;
		vector	_vec;

		bool	is_dup(const int& num) const;
		bool	is_valid(const string& num) const;
		bool	is_vp(const int& ac, char **av);

		void	deque_merge_insertion(deque& deq, const int& start, const int& end);
		void	deque_binary_insertion(deque& deq, const int& value);

		void	vector_merge_insertion(vector& vec, const int& start, const int& end);
		void	deque_binary_insertion(deque& deq);

		int	jackjack(const int& num) const;
		void	merge_insertion();
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& pmm);
		PmergeMe& operator=(const PmergeMe& pmm);
		~PmergeMe();

		const deque&	getDequeList() const;
		const vector&	getVectorList() const;

		template <typename T>
		void	showContainer(const T& con) const
		{
			for (size_t i = 0; i < con.size(); i++)
				std::cout << con[i] << " ";
			std::cout << std::endl;
		}
};

#endif // PMERGEME_HPP