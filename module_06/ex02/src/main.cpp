/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:44:31 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/06 17:08:15 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
//FUNCTIONS
Base *generate(void)
{
    srand(time(NULL));
    switch(rand() % 3)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
    return NULL;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Is C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        Base a = dynamic_cast<A&>(p);
        std::cout << "Is A" << std::endl;
    }catch (std::exception & e)
    {
        try
        {
            Base b = dynamic_cast<B&>(p);
            std::cout << "Is B" << std::endl;
        }catch (std::exception & e)
        {
            try
            {
                Base c = dynamic_cast<C&>(p);
                std::cout << "Is C" << std::endl;
            }catch (std::exception & e)
            {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}


int main(void)
{
	Base *base = generate();
    if (base == NULL)
    {
        delete base;
	    return (0);
    }
	std::cout << "Pointer: " << std::endl;
	identify(base);
	std::cout << "Reference: " << std::endl;
	identify(*base);
	delete base;
	return (0);
}