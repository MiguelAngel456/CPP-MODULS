/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:53:48 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/09 11:45:42 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H


#include <iostream>
#include "AForm.hpp"
#include <cstdlib>
class RobotomyRequestForm : public AForm
{   

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string name);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        RobotomyRequestForm &operator=(const RobotomyRequestForm& otro);
        virtual void execute(Bureaucrat const & executor) const;
        
};

#endif