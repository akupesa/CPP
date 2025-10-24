/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:46:47 by akupesa           #+#    #+#             */
/*   Updated: 2025/10/18 13:40:40 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Intern intern;
        Bureaucrat highGrade("Alice", 5);

        // Teste 1: Criar formulário válido
        AForm* shrub = intern.makeForm("shrubbery creation", "garden");
        if (shrub) {
            highGrade.signForm(*shrub);
            highGrade.executeForm(*shrub);
            delete shrub;
        }

        // Teste 2: Criar outro formulário válido
        AForm* robot = intern.makeForm("robotomy request", "target");
        if (robot) {
            highGrade.signForm(*robot);
            highGrade.executeForm(*robot);
            delete robot;
        }

        // Teste 3: Criar formulário inválido
        AForm* invalid = intern.makeForm("invalid form", "nowhere");
        if (invalid) {
            highGrade.signForm(*invalid);
            highGrade.executeForm(*invalid);
            delete invalid;
        }

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
