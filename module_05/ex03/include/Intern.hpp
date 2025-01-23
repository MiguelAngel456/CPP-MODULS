/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:31:13 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/03 17:30:34 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H


#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        Intern &operator=(const Intern& otro);
        //FUNCIONES
        AForm* makeForm(std::string name, std::string target);
};
#endif