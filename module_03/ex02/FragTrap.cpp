/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:23:29 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/20 12:28:34 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDmg = 30;
    std::cout << "FragTrap Constructor Default called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDmg = 30;
    std::cout << "FragTrap Constructor with parameters called" << std::endl;
}
FragTrap::~FragTrap()
{    
    std::cout << "FragTrap Destructor Default called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
    std::cout << "FragTrap Copy constructor called" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap& copy)
{
    this->name = copy.name;
    this->hitPoint = copy.hitPoint;
    this->energyPoint = copy.energyPoint;
    this->attackDmg = copy.attackDmg;
    return (*this);
}


void FragTrap::highFivesGuys()
{
	std::cout << this->name << ": " << "FragTrap " << this->name << " wants a hi'5 !\"" << std::endl;
}