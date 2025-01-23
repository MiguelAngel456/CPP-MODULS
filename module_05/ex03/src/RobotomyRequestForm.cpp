/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:55:51 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/09 11:46:59 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm() 
{
    std::cout << "The RobotomyRequestForm has been created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name): AForm(name, false, 72, 45) 
{
    std::cout << "The RobotomyRequestForm has been created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm) : AForm(RobotomyRequestForm)
{
	std::cout << "RobotomyRequestForm copy constructor called\n" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &s)
{
    if (this != &s)
	{
		AForm::operator=(s);
	}
    std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor RobotomyRequestForm default called" << std::endl;
}

//FUNCIONES

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    AForm::execute(executor);
    std::cout << executor.getName()+" execute the "+this->getName()+" RobotomyRequestForm" << std::endl;
	srand(time(NULL));
    if (rand() % 2)
		std::cout << executor.getName() << " has been robotomized successfully\n";
	else
		std::cout << executor.getName() << " robotomization failed\n";
}