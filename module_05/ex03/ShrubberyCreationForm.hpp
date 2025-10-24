/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:10:07 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/08 12:10:12 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>
# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	sTarget;
	protected:
		void	executeAction() const;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string sTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm& scf);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& scf);
		~ShrubberyCreationForm();

		std::string	getTarget() const;
};

#endif //SHRUBBERYCREATIONFORM_HPP
