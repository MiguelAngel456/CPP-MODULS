/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:21:05 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/19 18:40:16 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCRAVTRAP_H
#define SCRAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
    private:
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        ScavTrap &operator=(const ScavTrap& otro);

        void attack(const std::string& target);
        void guardGate();

};

#endif