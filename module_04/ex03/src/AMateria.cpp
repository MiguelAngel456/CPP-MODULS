/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:39:35 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/29 16:12:46 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/All.hpp"

AMateria::AMateria()
{
    this->type = "Default";
    std::cout << "Materia default Created" << std::endl;    
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout << "Materia "<< type <<" Created" << std::endl;
}

AMateria::AMateria(const AMateria &type)
{
    *this = type;
    std::cout << "Materia" << type.type <<" copied successfully" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Abstract materia has beed destroyed\n";
}

AMateria &AMateria::operator=(const AMateria& other)
{
    this->type = other.type;
    std::cout << "Materia" << other.type <<" equality made" << std::endl;
    return (*this);
}
void AMateria::use(ICharacter& chr)
{
    (void) chr;
    std::cout << "This materia cannot be use" << std::endl;
}

std::string const &AMateria::getType() const
{
    return this->type;
}