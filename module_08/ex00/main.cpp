/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:46:45 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/11 18:55:24 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main(void)
{
    std::vector<int> vec;
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    std::cout << "*********VECTOR************" <<std::endl;
    std::vector<int>::iterator it = vec.begin();
    while (it != vec.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
    std::cout << "*********EASYFIND************" <<std::endl;
    try
    {
        it = easyfind(vec, 3);
        std::cout << "FOUND OBJECT" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}