/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:39 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/23 11:56:51 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
protected:
    std::string type;
    Brain *brn;
public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
    Dog &operator=(const Dog& other);
    
    void makeSound() const;
    Brain *getBrain(void) const;
};
#endif