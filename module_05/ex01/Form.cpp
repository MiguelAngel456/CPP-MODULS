/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:20:48 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/02 15:26:19 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form::Form(): name("default"), is_signed(false), sign_grade(50), ex_grade(50) 
{
    std::cout << "The Form "+this->name+" has been created" << std::endl;
}

Form::Form(std::string cname, bool is_signed, int sign_grade, int ex_grade): name(cname), is_signed(is_signed), sign_grade(sign_grade), ex_grade(ex_grade)
{   
    if ( sign_grade > 150 || ex_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (ex_grade < 1 || ex_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "The Form "+this->name+" has been created" << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor "+this->name+" default called" << std::endl;
}

Form::Form(const Form &copy): name(copy.getName()), is_signed(copy.getIs_signed()), sign_grade(copy.getSign_grade()), ex_grade(copy.getEx_grade())
{
    *this = copy;
}
//SOBRECARGAS
Form &Form::operator=(const Form& otro)
{
    this->is_signed = otro.getIs_signed();
    return *this;
}

std::ostream	&operator<<(std::ostream &str, Form const &form)
{
	return (str << form.getName() << " form, signed: " << form.getIs_signed() << ", sign grade: " << form.getSign_grade() << ", exec grade: " << form.getEx_grade());
}

//GETTERS
std::string Form::getName() const
{
    return this->name;
}
bool Form::getIs_signed() const
{
    return  this->is_signed;
}
int Form::getSign_grade() const
{
    return  this->sign_grade;
}
int Form::getEx_grade() const
{
    return  this->ex_grade;
}

//PARA LOS ERRORES
const char*	Form::GradeTooLowException::what() const throw() {
	return ("GRADE TOO LOW!");
}

const char*	Form::GradeTooHighException::what() const throw() {
	return "GRADE TOO HIGH!";
}

//FUNCIONES
void Form::beSigned(Bureaucrat &b)
{
    if (b.getRange() > this->getSign_grade())
    {
        throw Form::GradeTooLowException();
    }
    else
    {        
        this->is_signed = true;
        std::cout << "The form "+this->getName()+" has been signed" << std::endl;
    }
}
