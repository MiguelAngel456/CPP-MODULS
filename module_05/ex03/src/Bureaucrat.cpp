/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:14:20 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/03 16:21:14 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

Bureaucrat::Bureaucrat()
{
    this->name = "default";
    this->range = 150;
    std::cout << "The Bureaucrat "+this->name+" has been created" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int range)
{
    this->name = name;
    if (range > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (range < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "The Bureaucrat "+this->name+" has been created" << std::endl;
    this->range = range;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Animal default called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& otro)
{
    this->name = otro.getName();
    this->range = otro.getRange();
    return *this;
}

//GETTERS
std::string Bureaucrat::getName(void) const
{
    return (this->name);
}
int Bureaucrat::getRange(void) const
{
    return this->range;
}

//PARA LOS ERRORES
const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("GRADE TOO LOW!");
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "GRADE TOO HIGH!";
}

//FUNCIONES
void Bureaucrat::upGrade(void)
{
    if ((this->range - 1) < 1)
        throw GradeTooHighException();
    this->range--;
}

void Bureaucrat::downGrade(void)
{
    if ((this->range + 1) > 150)
        throw GradeTooLowException();
    this->range++;
}

void    Bureaucrat::signForm(AForm &f)
{
    if(f.getIs_signed() == true)
    {
        std::cout << "The form "+ f.getName()+" is already signed" << std::endl;
    }
    else
    {    
        try
        {
            f.beSigned(*this);   
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}
void    Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName()+" executeed "+form.getName() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << this->getName()+" couldn't execute "+form.getName()+" form because " + e.what() << std::endl;
    }
}

//SOBRECARGA
std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat)
{
	return (str << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getRange());
}