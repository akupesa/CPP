/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:27:46 by akupesa           #+#    #+#             */
/*   Updated: 2025/08/12 15:45:46 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP 

# include <string>
# include <iostream>
# include <exception>

class Form;

class	Bureaucrat
{
	private:
		const std::string name;
		int	grade;
		class	GradeTooHighException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Too High Grade, insert a grade between 1-150.");
			}
		};

		class	GradeTooLowException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Too Low Grade, insert a grade between 1-150.");
			}
		};

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& bure);
		Bureaucrat& operator=(const Bureaucrat& bure);
		~Bureaucrat();
		
		Bureaucrat& operator++();
		Bureaucrat operator++(int);
		Bureaucrat& operator--();
		Bureaucrat operator--(int);

		int	getGrade() const;
		std::string 	getName() const;
		
		void	signForm(Form& fox);
		
		void	decrementGrade();
		void	incrementGrade();
};

std::ostream& operator<<(std::ostream& side, const Bureaucrat& obj);

#endif // !BUREAUCRAT_HPP
