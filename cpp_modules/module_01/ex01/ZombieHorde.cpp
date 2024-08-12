/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:54:22 by mfuente-          #+#    #+#             */
/*   Updated: 2024/07/25 18:16:32 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* z = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        z[i].setName(name);
        z[i].announce();
        i++;
    }

    return (z);
}