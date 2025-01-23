/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:23:47 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/05 14:36:42 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int test_intern()
{
	Intern intern;
	AForm *form;
	try
	{
		Bureaucrat a("Dolores", 1);

		form = intern.makeForm("shrubbery creation", "Ontos");
		if (form == NULL)
		{
			delete form;
			return (0);
		}
		a.signForm(*form);
		a.executeForm(*form);
		delete form;

		form = intern.makeForm("robotomy request", "Logos");
		if (form == NULL)
		{
			delete form;
			return (0);
		}
		a.signForm(*form);
		a.executeForm(*form);
		delete form;

		form = intern.makeForm("presidential pardon", "Pneuma");
		if (form == NULL)
		{
			delete form;
			return (0);
		}
		a.signForm(*form);
		a.executeForm(*form);
		delete form;

		form = intern.makeForm("unknown", "Unknown");
	}
	catch (std::exception &e)
	{ 
		std::cerr << e.what() << std::endl; return (1); 
	}
	return (0);
}

int main()
{
	return (test_intern());
}