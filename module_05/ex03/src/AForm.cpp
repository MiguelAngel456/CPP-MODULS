/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:20:48 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/03 12:49:20 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm(): name("default"), is_signed(false), sign_grade(50), ex_grade(50) 
{
    std::cout << "The AForm "+this->name+" has been created" << std::endl;
}

AForm::AForm(std::string cname, bool is_signed, int sign_grade, int ex_grade): name(cname), is_signed(is_signed), sign_grade(sign_grade), ex_grade(ex_grade)
{   
    if ( sign_grade > 150 || ex_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (ex_grade < 1 || ex_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "The AForm "+this->name+" has been created" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Destructor "+this->name+" default called" << std::endl;
}

AForm::AForm(const AForm &copy): name(copy.getName()), is_signed(copy.getIs_signed()), sign_grade(copy.getSign_grade()), ex_grade(copy.getEx_grade())
{
    *this = copy;
}
//SOBRECARGAS
AForm &AForm::operator=(const AForm& otro)
{
    this->is_signed = otro.getIs_signed();
    return *this;
}

std::ostream	&operator<<(std::ostream &str, AForm const &Aform)
{
	return (str << Aform.getName() << " Aform, signed: " << Aform.getIs_signed() << ", sign grade: " << Aform.getSign_grade() << ", exec grade: " << Aform.getEx_grade());
}

//GETTERS
std::string AForm::getName() const
{
    return this->name;
}
bool AForm::getIs_signed() const
{
    return  this->is_signed;
}
int AForm::getSign_grade() const
{
    return  this->sign_grade;
}
int AForm::getEx_grade() const
{
    return  this->ex_grade;
}

//PARA LOS ERRORES
const char*	AForm::GradeTooLowException::what() const throw() {
	return ("GRADE TOO LOW!");
}

const char*	AForm::GradeTooHighException::what() const throw() {
	return "GRADE TOO HIGH!";
}

const char* AForm::FormNotSigned::what() const throw() {
    return "FORM NOT SIGNED";
}

//FUNCIONES
void AForm::beSigned(Bureaucrat &b)
{
    if (b.getRange() > this->getSign_grade())
    {
        throw AForm::GradeTooLowException();
    }
    else
    {        
        this->is_signed = true;
        std::cout << "The Aform "+this->getName()+" has been signed" << std::endl;
    }
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (executor.getRange() > this->getEx_grade())
    {
        throw AForm::GradeTooLowException(); 
    }
    if(this->getIs_signed() != true)
        throw AForm::FormNotSigned();
}
