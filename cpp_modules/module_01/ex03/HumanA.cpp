/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:41:33 by mfuente-          #+#    #+#             */
/*   Updated: 2024/07/27 10:33:10 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
//CONTRUCTOR
HumanA::HumanA(std::string name, Weapon &weap)
{
    this->name = name;
    this->weap = &weap;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weap->getType() << "\n";
}