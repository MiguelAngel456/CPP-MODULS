/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:11:49 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/20 16:21:45 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
Cat::Cat() : Animal("Cat")
{
    std::cout << "Contructor Cat default called" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Destructor Cat default called" << std::endl;
}
Cat::Cat(const Cat &copy)
{
    *this = copy;
    std::cout << "Contructor copy Cat called" << std::endl;
}
Cat &Cat::operator=(const Cat& otro)
{
    this->type = otro.type;
    return (*this);
}
void Cat::makeSound() const
{
    std::cout << "NYAAA" << std::endl;
}