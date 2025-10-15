/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:09:51 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/08 12:09:56 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const int	rSing;
		const int	rExec;
		std::string	rTarget;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string rTarget);
		RobotomyRequestForm(const RobotomyRequestForm& rrf);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& rrf);
		~RobotomyRequestForm();
};

#endif
