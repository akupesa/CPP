/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:09:39 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/08 12:09:41 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const int	pSign;
		const int	pExec;
		std::string	pTarget;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string pTarget);
		PresidentialPardonForm(const PresidentialPardonForm& ppf);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& ppf);
		~PresidentialPardonForm();
};

#endif //PRESIDENTIALPARDONFORM_HPP
