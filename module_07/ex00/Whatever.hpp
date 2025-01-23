/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:57:15 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/06 18:43:15 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef whatever_H
#define whatever_H

#include <iostream>
#include <string>
template <typename T>
void swap (T& s1, T& s2)
{
    T aux = s1;
    s1 = s2;
    s2 = aux;
}

template <typename T>
T min (T& n1, T& n2)
{
    if (n1 < n2)
        return n1;
    return n2;
}

template <typename T>
T max (T& n1, T& n2)
{
    if (n1 > n2)
        return n1;
    return n2;
}

#endif