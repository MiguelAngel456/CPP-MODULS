/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:23:47 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/03 16:21:40 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"


int test_shrubbery()
{
	ShrubberyCreationForm form("home");
	try
	{
		Bureaucrat C("Charo", 140);
		std::cout << "Before upgrade:" << std::endl;
		C.signForm(form);
		std::cout << C;
		for (int i = 0; i < 20; i++)
			C.upGrade();
		std::cout << "After upgrade:" << std::endl;
		std::cout << C;
		C.signForm(form);
		C.executeForm(form);
	}
	catch (std::exception &e)
		{ std::cerr << e.what() << std::endl; return (1); }
	return (0);
}

int test_robotomy()
{
	RobotomyRequestForm form("Funky Solution");
	try
	{
		Bureaucrat C("Mari Ángeles", 55);
		std::cout << "Before upgrade:" << std::endl;
		std::cout << C;
		C.signForm(form);
		std::cout << C;
		for (int i = 0; i < 20; i++)
			C.upGrade();
		std::cout << "After upgrade:" << std::endl;
		std::cout << C;
		C.signForm(form);
		C.executeForm(form);
	}
	catch (std::exception &e)
		{ std::cerr << e.what() << std::endl; return (1); }
	return (0);
}

int test_presidential()
{
	PresidentialPardonForm form("Professional Problem");
	try
	{
		Bureaucrat C("Manoli", 25);
		std::cout << "Before upgrade:" << std::endl;
		std::cout << C;
		C.signForm(form);
		C.executeForm(form);
		for (int i = 0; i < 20; i++)
			C.upGrade();
		std::cout << "After upgrade:" << std::endl;
		std::cout << C;
		C.executeForm(form);
	}
	catch (std::exception &e)
		{ std::cerr << e.what() << std::endl; return (1); }
	return (0);
}

int main()
{
	std::cout << "----------------------------------------" << std::endl;
	if (test_shrubbery())
		return (1);
	std::cout << "----------------------------------------" << std::endl;
	if (test_robotomy())
		return (1);
	std::cout << "----------------------------------------" << std::endl;
	if (test_presidential())
		return (1);
	return (0);
}