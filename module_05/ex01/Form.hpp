/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:29:22 by akupesa           #+#    #+#             */
/*   Updated: 2025/09/14 12:38:32 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <ostream>
# include <iostream>
# include <exception>

class Bureaucrat;

class	Form
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
		Form();
		Form(const std::string name, const int signIt, const int executeIt);
		Form(const Form& zeni);
		Form& operator=(const Form& zeni);
		~Form();

		int		getSign() const;
		int 		getExec() const;
		bool		getBool() const;
		void		beSigned(Bureaucrat& bure);
		std::string	getName() const;

};

std::ostream&	operator<<(std::ostream& side, const Form& zeni);

#endif //FORM_HPP
