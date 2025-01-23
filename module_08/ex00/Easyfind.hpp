/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:47:07 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/11 18:53:49 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <exception>
#include <iostream>
#include <vector>

class NotFoundException : public std::exception
{
    const char* what() const throw()
    {
        return "Element not found";
    }
};

template <typename T>
typename T::iterator easyfind(T& var1, int need)
{
    typename T::iterator it = var1.begin();
    while (it != var1.end())
    {
        if (*it == need)
            return it;
        it++;
    }
    throw NotFoundException();
}



#endif