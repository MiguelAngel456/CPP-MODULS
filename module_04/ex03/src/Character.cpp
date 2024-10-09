/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:15:08 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/30 15:37:02 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/All.hpp"

Character::Character()
{
    this->name = "Default";
    for (size_t i = 0; i < 4; i++)
    {
        this->inventory[i] = 0;
    }
    std::cout << "Character default has been born" << std::endl;
}
Character::Character(std::string name)
{
    this->name = name;
    for (size_t i = 0; i < 4; i++)
    {
        this->inventory[i] = 0;
    }
    std::cout << "Character "<< name <<" has been born" << std::endl;
}

Character::Character(const Character &type)
{
    *this = type;
    std::cout << "Character has been copied" << std::endl;
}
Character &Character::operator=(const Character &other)
{
    this->name = other.getName();
    for (size_t i = 0; i < 4; i++)
    {
        if (this->inventory[i])
        {
            delete (this->inventory[i]);
        }
        this->inventory[i] = other.inventory[i];    
    }
    std::cout << "Character has been equaled" << std::endl;
    return (*this);
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    std::cout << "Character "<< this->name <<" has been destroyed" << std::endl;   
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (!m)
    {
        std::cout << "This materia doesnt equip"<<std::endl;
        return ;    
    }
    for (size_t i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            std::cout << "Character " << this->name << " has been equiped "<< m->getType() <<std::endl;
            return; 
        }
    }
    std::cout << "Inventore is full" << std::endl;
}

void Character::unequip(int idx)
{
    if ((idx >= 0 && idx < 4) && (this->inventory[idx] != NULL))
    {
        std::cout << "The material "<< this->inventory[idx]->getType()<< " has been unequip" << std::endl;   
        delete this->inventory[idx]; 
        this->inventory[idx] = NULL;
    }
    
    if (idx < 0 || idx >= 4)
    {
        std::cout << "  inventore number "<< idx <<" does not exist" << std::endl;
        return ;
    }
    
    if (this->inventory[idx] == NULL)
        std::cout << "Inventore number "<< idx <<" is empty" << std::endl; 
}
void Character::use(int idx, ICharacter& target)
{
    if ((idx >= 0 && idx < 4) && (this->inventory[idx] != NULL))
    {
        if(this->inventory[idx]->getType() == "ice")
        {
            std::cout << "Ice: * shoots an ice bolt at "<< target.getName() << " *" << std::endl;
            return;
        }
        if(this->inventory[idx]->getType() == "cure")
        {
            std::cout << "Cure: * heals "<< target.getName() << "’s wounds *"<< std::endl;
            return;
        }
        std::cout << "The material "<< this->inventory[idx]->getType()<< " has been use" << std::endl;
        return;   
    }

    if (idx < 0 || idx >= 4)
    {
        std::cout << "  inventore number "<< idx <<" does not exist" << std::endl;
        return ;
    }
    if (this->inventory[idx] == NULL)
    {
        std::cout << "Inventore number "<< idx <<" is empty" << std::endl;
        return ;
    }
    
}
