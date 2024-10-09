/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:31:12 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/23 13:53:28 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"
class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    virtual ~Animal();
    Animal(const Animal &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
    Animal &operator=(const Animal& otro);

    virtual void makeSound() const = 0;
    std::string getType() const;
    virtual Brain *getBrain(void) const = 0;
};
#endif