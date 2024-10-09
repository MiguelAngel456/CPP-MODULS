/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:22:07 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/20 12:28:56 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDmg = 20;
    std::cout << "ScavTrtap Constructor Default called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDmg = 20;
    std::cout << "ScavTrtap Constructor with parameters called" << std::endl;
}
ScavTrap::~ScavTrap()
{    
    std::cout << "ScavTrtap Destructor Default called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
    *this = copy;
    std::cout << "ScravTrap Copy constructor called" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap& copy)
{
    this->name = copy.name;
    this->hitPoint = copy.hitPoint;
    this->energyPoint = copy.energyPoint;
    this->attackDmg = copy.attackDmg;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
        return ;
    }
    if (this->energyPoint == 0)
    {
        std::cout << "ScavTrap " << this->name << " is out energy" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacked " << target << " and causing " << this->attackDmg << " points of damage!" << std::endl;
    this->energyPoint--;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " It's in Guardian Mode." << std::endl;
}