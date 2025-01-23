/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:03:39 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/11 11:52:56 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
int main()
{
    //CONSTRUCTORES
    Array<int> a1;
    Array<int> a2(5);
    try
    {
        for (int i = 0; i < (int)a2.size(); i++)
        {
            a2[i] = i+1;
        }
    }catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl; 
    }
    std::cout << "*******************A2*******************" << std::endl;
    int n = a2.size();
    try{
        for (int i = 0; i < n; i++)
        {
            std::cout << a2[i] << std::endl;
        }
    }catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl; 
    }
    a1 = a2;
    std::cout << "*******************A1*******************" << std::endl;
    n = a1.size();
    try{
        for (int i = 0; i < n; i++)
        {
            std::cout << a1[i] << std::endl;
        }
    }catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl; 
    }
    Array<int> a3(a2);
    std::cout << "*******************A3*******************" << std::endl;
    n = a3.size();
    try{
        for (int i = 0; i < n; i++)
        {
            std::cout << a3[i] << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl; 
    }
    return 0;
}