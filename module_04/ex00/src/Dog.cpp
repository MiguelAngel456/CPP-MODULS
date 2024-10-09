/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:13:20 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/20 16:21:38 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
Dog::Dog() : Animal("Dog")
{
    std::cout << "Contructor Dog default called" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Destructor Dog default called" << std::endl;
}
Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << "Contructor copy Dog called" << std::endl;
}
Dog &Dog::operator=(const Dog& otro)
{
    this->type = otro.type;
    return (*this);
}
void Dog::makeSound() const
{
    std::cout << "Guau Guau" << std::endl;
}