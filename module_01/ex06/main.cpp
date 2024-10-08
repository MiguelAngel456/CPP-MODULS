/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:46:06 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/20 18:22:02 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int level(std::string level)
{
    std::string aux[4] = {"debug", "info", "warning", "error"};
    std::string aux2[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 1; i <= 4; i++)
    {
        if ((level == aux[i]) || (level == aux2[i]))
            return (i);
    }
    return (-1);
}

int main(int argc, char **argv)
{

    Harl h;
    if (argc != 2)
        return (1);
    std::string aux[4] = {"debug, info, warning, error"};
    int pos = level(argv[1]);
    if (pos == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    else
    {
        for (int i = pos; i < 4; i++)
        {
            switch (i)
            {
                case 1:
                    h.complain("debug");
                    break;
                case 2:
                    h.complain("info");
                    break;
                case 3:
                    h.complain("warning");
                    break;
                case 4:
                    h.complain("error");
                    break;
                default:
                    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                    break;
            }
            std::cout << "\n";
        }
    }
  //  std::cout << pos << "\n";
    return (0);
}