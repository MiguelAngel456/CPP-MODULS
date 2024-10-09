/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 16:42:09 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/28 15:17:34 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H


#include "All.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(const AMateria &type);
        AMateria &operator=(const AMateria& otro);

        virtual AMateria* clone() const = 0;
        std::string const &getType() const; //Returns the materia type
        virtual void use(ICharacter& target);
};


#endif