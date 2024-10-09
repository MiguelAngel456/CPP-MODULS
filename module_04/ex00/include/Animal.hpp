/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:31:12 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/22 12:40:13 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
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

    virtual void makeSound() const;
    std::string getType() const;
};
#endif