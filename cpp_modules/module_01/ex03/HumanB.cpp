/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:55:59 by mfuente-          #+#    #+#             */
/*   Updated: 2024/07/27 10:42:34 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weap->getType() << "\n";
}
void HumanB::setWeapon(Weapon &newWeapon) 
{
    this->weap = &newWeapon;
}