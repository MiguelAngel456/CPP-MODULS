/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:39 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/23 11:56:45 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
protected:
    std::string type;
    Brain *brn;
public:
    Cat();
    ~Cat();
    Cat(const Cat &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
    Cat &operator=(const Cat& other);
    
    void makeSound() const;
    Brain *getBrain(void) const;
};
#endif