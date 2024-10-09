/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:11:35 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/22 15:53:30 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
WrongAnimal::WrongAnimal()
{
    this->type = "other";
    std::cout << "Contructor WrongAnimal default called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "Contructor WrongAnimal with parameters called" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal default called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    std::cout << "Contructor copy WrongAnimal called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal& otro)
{
    this->type = otro.type;
    return (*this);
}
void WrongAnimal::makeSound() const
{
    std::cout << "This Wronganimal doesnt make sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return (this->type);
}