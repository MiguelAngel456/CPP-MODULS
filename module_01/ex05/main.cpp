/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:46:06 by mfuente-          #+#    #+#             */
/*   Updated: 2024/07/29 19:00:07 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main()
{
    Harl h;
    std::cout << "\n";
    h.complain("debug");
    std::cout << "\n";
    h.complain("info");
    std::cout << "\n";
    h.complain("warning");
    std::cout << "\n";
    h.complain("error");
    std::cout << "\n";
    return (0);
}