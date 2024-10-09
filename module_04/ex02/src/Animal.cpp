/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:11:35 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/23 16:14:37 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
Animal::Animal()
{
    this->type = "other";
    std::cout << "Contructor Animal default called" << std::endl;
}
Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Contructor Animal with parameters called" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Destructor Animal default called" << std::endl;
}
Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "Contructor copy Animal called" << std::endl;
}
Animal &Animal::operator=(const Animal& otro)
{
    this->type = otro.type;
    return (*this);
}
std::string Animal::getType() const
{
    return (this->type);
}