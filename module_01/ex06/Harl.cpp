/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:47:52 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/20 18:18:00 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Wild Harl created!\n" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Wild Harl destroyed!\n" << std::endl;
}
void Harl::debug( void )
{
    std::cout << "I love having extra";
    std::cout << " bacon for my 7XL-double-cheese-triple-pickle-specialketchup";
    std::cout << "burger. I really do!\n";
}
void Harl::info( void )
{
   std::cout << "I cannot believe adding extra bacon costs more money. ";
   std::cout << "You didn’t put enough bacon in my burger! If you did, ";
   std::cout << "I wouldn’t be asking for more!\n";
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working ";
    std::cout << "here since last month.\n";
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level )
{
    std::string options[4] = {"debug", "info", "warning", "error"};
    void (Harl::*funciones[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string aux = level;
    std::transform(level.begin(), level.end(), aux.begin(), ::tolower );
    for(int i = 0; i < 4; i++)
    {
        if ( aux == options[i])
        {
            (this->*funciones[i])();
            break;
        }
    }
}
