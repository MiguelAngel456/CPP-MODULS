/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:11:50 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/09 13:58:06 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>
template <typename T>
void iter(T array[], size_t length, void (*func)(T&))
{
    for (size_t i = 0; i < length; i++)
    {
        func(array[i]);
    }
}
//FUNCIONES DE EJEMPLO
template <typename T>
void	print(T& elem)
{
	std::cout << elem << std::endl;
}

template <typename T>
void	increment(T& elem)
{
	elem++;
}

#endif