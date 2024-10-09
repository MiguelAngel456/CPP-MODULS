/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:37:39 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/22 13:30:46 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <iostream>
#include "WrongAnimal.hpp"
#include "Brain.hpp"
class WrongCat : public WrongAnimal
{
protected:
    std::string type;
    Brain *brn;
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
    WrongCat &operator=(const WrongCat& otro);
    
    void makeSound() const;
};
#endif