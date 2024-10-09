/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:48:40 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/30 15:23:17 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/All.hpp"


MateriaSource::MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        this->inventory[i] = 0;
    }
    std::cout << "Materia Source default Created" << std::endl; 
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    *this = src;
    std::cout << "Materia Source has been copied" << std::endl;
}
MateriaSource	&MateriaSource::operator =(const MateriaSource &src)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete (this->inventory[i]);
        this->inventory[i] = src.inventory[i];
    }
    std::cout << "Materia Source has been equaled" << std::endl;
    return (*this);
}
MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    std::cout << "Materia Source has been destroyed" << std::endl;
}
void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
    {
        std::cout << "This materia does not exist" << std::endl;
        delete m;
        return ;
    }
    for (size_t i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            std::cout << "This materia "<< this->inventory[i]->getType() <<" has been added to the inventori" << std::endl;
            //delete m;
            return ;
        }
    }
    delete m;
    std::cout << "full inventori" << std::endl;
    
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    
    for (size_t i = 0; i < 4; i++)
    {
        if (this->inventory[i])
        {
            if (this->inventory[i]->getType() == type && this->inventory[i])
            {
                std::cout << "Created "<< this->inventory[i]->getType() << std::endl;
                return (this->inventory[i]->clone());
            }    
        }
    }
    std::cout << "First add it" << std::endl;
    return 0;
}