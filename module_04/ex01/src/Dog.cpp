/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:13:20 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/23 12:14:01 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
Dog::Dog() : Animal("Dog")
{
    std::cout << "Contructor Dog default called" << std::endl;
    this->brn = new Brain();
}
Dog::~Dog()
{
    delete brn;
    std::cout << "Destructor Dog default called" << std::endl;
}
Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << "Contructor copy Dog called" << std::endl;
}
Dog &Dog::operator=(const Dog& other)
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
void Dog::makeSound() const
{
    std::cout << "Guau Guau" << std::endl;
}
Brain *Dog::getBrain(void) const
{
	return (this->brn);
}