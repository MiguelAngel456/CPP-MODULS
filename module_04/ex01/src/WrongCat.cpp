/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:11:49 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/22 13:31:25 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Contructor WrongCat default called" << std::endl;
    this->brn = new Brain();
}
WrongCat::~WrongCat()
{
    delete brn;
    std::cout << "Destructor WrongCat default called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
    std::cout << "Contructor copy WrongCat called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat& otro)
{
    this->type = otro.type;
    return (*this);
}
void WrongCat::makeSound() const
{
    std::cout << "BEEE" << std::endl;
}