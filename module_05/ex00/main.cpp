/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:23:47 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/05 14:26:53 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *b1;
    Bureaucrat *b2;
    try
    {
        b1 = new Bureaucrat();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        b2 = new Bureaucrat("Pedro", 1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        b1->upGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        b2->upGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    delete b1;
    delete b2;
    return 0;
}