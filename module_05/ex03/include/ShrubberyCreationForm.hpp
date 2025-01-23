/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:11:55 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/03 16:07:51 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H


#include <iostream>
#include "AForm.hpp"
class ShrubberyCreationForm : public AForm
{   

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& otro);
        virtual void execute(Bureaucrat const & executor) const;
        
};

#endif