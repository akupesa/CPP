/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:29:22 by akupesa           #+#    #+#             */
/*   Updated: 2025/09/14 12:38:32 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <ostream>
# include <iostream>
# include <exception>

class Bureaucrat;

class	AForm
{
	private:
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Too High Grade, insert a grade between 1-150.");
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Too High Grade, insert a grade between 1-150.");
			}
		};
		const std::string name;
		bool	wasSigned;
		const int signIt;
		const int executeIt;
	public:
		AForm();
		AForm(const std::string name, const int signIt, const int executeIt);
		AForm(const AForm& zeni);
		AForm& operator=(const AForm& zeni);
		~AForm();

		int		getSign() const;
		int 		getExec() const;
		bool		getBool() const;
		void		beSigned(Bureaucrat& bure);
		std::string	getName() const;

};

std::ostream&	operator<<(std::ostream& side, const AForm& zeni);

#endif //FORM_HPP
