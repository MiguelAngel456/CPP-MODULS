/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:01:34 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/09 11:45:21 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm() 
{
    std::cout << "The PresidentialPardonForm has been created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name): AForm(name, false, 25, 5) 
{
    std::cout << "The PresidentialPardonForm has been created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm) : AForm(PresidentialPardonForm)
{
	std::cout << "PresidentialPardonForm copy constructor called\n" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &s)
{
    if (this != &s)
	{
		AForm::operator=(s);
	}
    std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor PresidentialPardonForm default called" << std::endl;
}

//FUNCIONES

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    AForm::execute(executor);
    std::cout << executor.getName()+" execute the PresidentialPardonForm" << std::endl;

	std::ofstream	file;
	std::string		name = this->getName() + "_shrubbery";
	file.open(name.c_str());
	
	// https://ascii.co.uk/art/tree
	file << "     ccee88oo\n";
	file << "  C8O8O8Q8PoOb o8oo\n";
	file << " dOB69QO8PdUOpugoO9bD\n";
	file << "CgggbU8OU qOp qOdoUOdcb\n";
	file << "    6OuU  /p u gcoUodpP\n";
	file << "      \\\\\\//  /douUP\n";
	file << "        \\\\\\////\n";
	file << "         |||/\\\n";
	file << "        |||\\/\n";
	file << "         |||||\n";
	file << "   .....//||||\\....\n";

	file.close();    
}