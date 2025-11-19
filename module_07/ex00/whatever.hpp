/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:46:28 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/18 15:34:14 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &one, T &two)
{
	T three;

	three = one;
	one = two;
	two = three;
}

template <typename W>
W min(const W &one, const W &two)
{
	if (one > two)
		return (two);
	return (one);
}

template <typename K>
K max(const K &one, const K &two)
{
	if (one > two)
		return (one);
	return (two);
}

#endif // !WHATEVER_HPP
