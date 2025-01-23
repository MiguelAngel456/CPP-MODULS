/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:43:03 by mfuente-          #+#    #+#             */
/*   Updated: 2024/11/29 17:04:43 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H


#include <iostream>
#include "Form.hpp"
class Form;
class Bureaucrat
{
    private:
        std::string name;
        int         range;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int range);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        Bureaucrat &operator=(const Bureaucrat& otro);
        //GETTERS
        std::string getName(void) const;
        int getRange(void) const;
        //PARA LAS EXCEPCIONES
        class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};

		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};
        //FUNCIONES
        void	upGrade();
		void    downGrade();
        void    signForm(Form &f);
        
};

std::ostream& operator<<(std::ostream & os, const Bureaucrat & rhs);

#endif