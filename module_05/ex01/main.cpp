/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:23:47 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/09 11:44:29 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void)
{
    Bureaucrat *b1;
    Bureaucrat *b2;
    Form *f1;
    Form *f2;
//CEAR BUROCRATAS
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
//CREAR FORMULARIOS
    try
    {
        f1 = new Form();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        f2 = new Form("Contrato", false, 5, 5);
    }
    catch (std::exception & e)
    {

        std::cout << e.what() << std::endl;
    }
//FUNCION
    b2->signForm(*f2);
    try
    {
        f2->beSigned(*b2);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    delete b1;
    delete b2;
    delete f1;
    delete f2;
    return 0;
}