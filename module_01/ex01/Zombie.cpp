/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:41:27 by mfuente-          #+#    #+#             */
/*   Updated: 2024/07/25 18:14:24 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "The Zombie " << this->name << " created\n";
    return ;
}
Zombie::Zombie()
{
    this->name = "";
//    std::cout << "The Zombie " << this->name << " created\n";
    return ;
}
Zombie::~Zombie()
{
    std::cout << "The Zombie " << this->name << " destroyed\n";
	return;
}
void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
void Zombie::setName(std::string newName) 
{
    name = newName;
}