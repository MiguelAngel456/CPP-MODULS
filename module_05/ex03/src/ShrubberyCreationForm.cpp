/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:11:46 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/09 11:47:24 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm() 
{
    std::cout << "The ShrubberyCreationForm has been created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): AForm(name, false, 145, 137) 
{
    std::cout << "The ShrubberyCreationForm has been created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm) : AForm(ShrubberyCreationForm)
{
	std::cout << "ShrubberyCreationForm copy constructor called\n" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
    if (this != &s)
	{
		AForm::operator=(s);
	}
    std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor ShrubberyCreationForm default called" << std::endl;
}

//FUNCIONES

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    AForm::execute(executor);
    std::cout << executor.getName()+" execute the "+this->getName()+" ShrubberyCreationForm" << std::endl;
}