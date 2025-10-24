/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 07:12:40 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/18 13:35:10 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>

# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		struct FormCreator
		{
			std::string formName;
			AForm* (Intern::*creator)(std::string) const;
		};

		AForm* createShrubberyCreationForm(std::string target) const;
		AForm* createRobotomyRequestForm(std::string target) const;
		AForm* createPresidentialPardonForm(std::string target) const;

		static const FormCreator formCreators[];
	public:
		Intern();
		Intern(const Intern& inte);
		Intern& operator=(const Intern& inte);
		~Intern();

		AForm*	makeForm(std::string formName, std::string target);
};

#endif // INTERN_HPP
