/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:39:08 by akupesa           #+#    #+#             */
/*   Updated: 2025/11/05 10:39:09 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <ctime>
# include <string>
# include <iostream>

class Base
{
	private:
	public:
		Base();
		virtual ~Base();

		Base* generate(void);
		void  identify(Base* p);
		void  identify(Base& p);
};

#endif // BASE_HPP