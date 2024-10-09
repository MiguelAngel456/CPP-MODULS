/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:11:49 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/23 12:14:08 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
Cat::Cat() : Animal("Cat")
{
    std::cout << "Contructor Cat default called" << std::endl;
    this->brn = new Brain();
}
Cat::~Cat()
{
    delete brn;
    std::cout << "Destructor Cat default called" << std::endl;
}
Cat::Cat(const Cat &copy)
{
    *this = copy;
    std::cout << "Contructor copy Cat called" << std::endl;
}
Cat &Cat::operator=(const Cat& other)
{
    this->type = other.type;
    delete brn;
    this->brn = new Brain();
    int size = sizeof(this->brn->getIdeas());
    for (int i = 0; i < size; i++)
    {
        this->brn->setIdeas(i, other.brn->getIdeas()[i]);
    }
    return (*this);
}
void Cat::makeSound() const
{
    std::cout << "NYAAA" << std::endl;
}
Brain *Cat::getBrain(void) const
{
    return this->brn;
}