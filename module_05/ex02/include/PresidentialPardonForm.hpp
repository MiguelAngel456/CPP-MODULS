/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:00:41 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/05 14:23:50 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H


#include <iostream>
#include <fstream> 
#include "AForm.hpp"
class PresidentialPardonForm : public AForm
{   

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string name);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        PresidentialPardonForm &operator=(const PresidentialPardonForm& otro);
        virtual void execute(Bureaucrat const & executor) const;
        
};

#endif