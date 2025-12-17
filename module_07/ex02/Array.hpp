/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:19:34 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/22 11:19:53 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

template <typename T>
class Array
{
	private:
		T* data;
		unsigned int sizee;
	public:
		Array() : data(NULL), sizee(0) {}
		Array(unsigned int n) : data(new T[n]), sizee(n) {}
		Array(const Array& ar) : data(NULL), sizee(ar.sizee)
		{
			if (sizee > 0)
			{
				data = new T[sizee];
				for (unsigned int i = 0; i < sizee; i++)
					data[i] = ar.data[i];
			}
		}
		Array& operator=(const Array& ar)
		{
			if (this != &ar)
			{
				delete[] data;

				sizee = ar.size;
				if (sizee > 0)
					data = new T[sizee];
				else
					data = NULL;
				for (unsigned int i = 0; i < sizee; i++)
					data[i] = ar.data[i];
			}
			return (*this);
		}
		~Array()
		{
			delete[] data;
		}

		T& operator[] (unsigned int i)
		{
			if (i >= sizee)
				throw std::out_of_range("Index out of range");
			return (data[i]);
		}
		const T& operator[] (unsigned int i) const
		{
			if (i >= sizee)
				throw std::out_of_range("Index out of range");
			return (data[i]);
		}

		unsigned int size() const
		{
			return (sizee);
		}
};

#endif // ARRAY_HPP
