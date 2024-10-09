/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:02:30 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/12 16:17:12 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
        return (0);
    }else{
        
        int i, j;
        i = 1;
        while (i < argc)
        {
            j = 0;
            while(argv[i][j] != '\0')
            {
                std::cout << (char)std::toupper((argv[i][j]));
                j++;
            }
            i++;
        }      
    }
    std::cout << "\n";
    return (0);
}