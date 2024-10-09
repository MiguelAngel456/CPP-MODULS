/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:44:34 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/20 12:44:41 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "CP";
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDmg = 0;
    std::cout << "Constructor Default called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDmg = 0;
    std::cout << "Constructor with parameters called" << std::endl;
}
ClapTrap::~ClapTrap()
{    
    std::cout << "Destructor Default called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "Copy constructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = copy.name;
    this->hitPoint = copy.hitPoint;
    this->energyPoint = copy.energyPoint;
    this->attackDmg = copy.attackDmg;
    return (*this);
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint > (int)amount )
    {
        std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage" << std::endl;
        this->hitPoint -= amount;
    }else
    {

        if (this->hitPoint > 0)
        {
            this->hitPoint = 0;
            std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage and has died" << std::endl;
            return ;
        }
        else
        {
            std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
            return ;
        }
    }
    
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        return ;
    }
    if (this->energyPoint == 0)
    {
        std::cout << "ClapTrap " << this->name << " is out energy" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacked " << target << " and causing " << this->attackDmg << " points of damage!" << std::endl;
    this->energyPoint--;
}
void ClapTrap::beRepaired(unsigned int amount)
{
        if (this->hitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        return ;
    }
    if (this->energyPoint == 0)
    {
        std::cout << "ClapTrap " << this->name << " is out energy" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << "has restored" << amount << "hitpoints" << std::endl;
    this->energyPoint--;
    this->hitPoint += amount;
}
