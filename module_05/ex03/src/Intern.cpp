/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:51:39 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/03 17:34:19 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout << "The Intern has been created" << std::endl;
}
Intern::~Intern()
{
    std::cout << "The Intern has been destroyed" << std::endl;
}
Intern::Intern(const Intern &copy)
{
    *this = copy;
}
Intern &Intern::operator=(const Intern& otro)
{
    (void)otro;
    return *this;
}

//FUNCIONES
//PARA LLAMAR A LOS CONSTRUCTORES
AForm *new_shrubbery(const std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *new_robotomy(const std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *new_presidential(const std::string target)
{
	return new PresidentialPardonForm(target);
}


AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    typedef AForm* (*constructor)(const std::string);
    constructor constructors[3] = {&new_shrubbery, &new_robotomy, &new_presidential};
    for (int i = 0; i < 3; i++)
    {
        if (name == formNames[i])
        {
            std::cout << "Intern creates " + name + " form" << std::endl;
            return constructors[i](target);
        }
    }
    std::cout << "Intern cant creates " + name+ " a form" << std::endl;
    return NULL;
}