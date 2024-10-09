/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:22:35 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/22 15:44:12 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
    std::cout << "Contructor Brain default called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Destructor Brain default called" << std::endl;
}
Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "Contructor copy Brain called" << std::endl;
}
Brain &Brain::operator=(const Brain& other)
{
    int size = sizeof(this->ideas);
    for (int i = 0; i < size; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    return (*this);
}
const std::string *Brain::getIdeas() const
{
    return this->ideas;
}
void Brain::setIdeas( int i,  std::string idea)
{
    if (i >= 0 && i < 100)
        this->ideas[i] = idea;
}

