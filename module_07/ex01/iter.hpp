/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:43:29 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/19 15:27:01 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
# include <iostream>
# include <iterator>
# include <string>
# include <cstring>
# include <ostream>

template <typename T, typename Func>
void	iter(T *array, const size_t length, Func func)
{
	if (!array || length == 0 || !func)
		return ;
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif // ITER_HPP
