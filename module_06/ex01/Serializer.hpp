/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:16:25 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/06 12:17:36 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <iostream>
#include <cmath> 
#include <stdint.h>

typedef struct Data
{
	int 			n;
}   Data;

class Serializer
{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        Serializer &operator=(const Serializer& otro);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
#endif