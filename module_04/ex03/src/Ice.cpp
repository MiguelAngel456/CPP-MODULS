/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:41:58 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/29 14:58:42 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/All.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default Created" << std::endl;
}

Ice::~Ice()
{
    std::cout << "the ice has been destroyed" << std::endl;
}

Ice::Ice(const Ice &type)
{
    *this = type;
    std::cout << "the ice has been cloned" << std::endl;
}

Ice &Ice::operator=(const Ice& other)
{
    this->type = other.type;
    std::cout << "Ice equality made" << std::endl;
    return(*this);
}


Ice *Ice::clone() const
{
	return (new Ice(*this));
}

