/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:43:03 by mfuente-          #+#    #+#             */
/*   Updated: 2024/11/27 13:29:29 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_H
#define BUREACRAT_H


#include <iostream>
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
        
};

std::ostream& operator<<(std::ostream & os, const Bureaucrat & rhs);

#endif