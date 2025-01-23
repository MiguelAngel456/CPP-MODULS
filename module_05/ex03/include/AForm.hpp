/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:20:36 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/03 17:28:11 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H


#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
    private:
        std::string const name;
        bool is_signed;
        int const sign_grade, ex_grade;
    public:
        AForm();
        AForm(std::string cname, bool cis_signed, int csign_grade, int cex_grade);
        virtual ~AForm();
        AForm(const AForm &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        AForm &operator=(const AForm& otro);
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

        class FormNotSigned: public std::exception {
			virtual const char*	what() const throw();
		};
        //FUNCIONES
        void beSigned(Bureaucrat &b);
        virtual void execute(Bureaucrat const & executor) const = 0;
        
};

std::ostream& operator<<(std::ostream & os, const AForm & rhs);

#endif