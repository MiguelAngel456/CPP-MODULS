/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:47:15 by mfuente-          #+#    #+#             */
/*   Updated: 2024/07/08 17:56:03 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("Stackey Paco");
	Zombie* zombie = newZombie("Heapster Agapito");
    zombie->announce();
	delete zombie;
	return (0);
}