/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:41:58 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/30 11:09:00 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/All.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default Created" << std::endl;
}

Cure::~Cure()
{
    std::cout << "the cure has been destroyed" << std::endl;
}

Cure::Cure(const Cure &type)
{
    *this = type;
    std::cout << "the cure has been cloned" << std::endl;
}

Cure &Cure::operator=(const Cure& other)
{
    this->type = other.type;
    std::cout << "Cure equality made" << std::endl;
    return(*this);
}


Cure *Cure::clone() const
{
	return (new Cure(*this));
}


