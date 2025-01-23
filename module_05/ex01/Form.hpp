/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:20:36 by mfuente-          #+#    #+#             */
/*   Updated: 2024/11/29 17:03:26 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H


#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        std::string const name;
        bool is_signed;
        int const sign_grade, ex_grade;
    public:
        Form();
        Form(std::string cname, bool cis_signed, int csign_grade, int cex_grade);
        ~Form();
        Form(const Form &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        Form &operator=(const Form& otro);
        //GETTERS
        std::string getName() const;
        bool getIs_signed() const;
        int getSign_grade() const;
        int getEx_grade() const;
        //PARA LAS EXCEPCIONES
        class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};

		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};
        //FUNCIONES
        void beSigned(Bureaucrat &b);
        
};

std::ostream& operator<<(std::ostream & os, const Form & rhs);

#endif