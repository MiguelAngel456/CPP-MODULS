/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:10:11 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/28 15:17:07 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP

#include "All.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria *inventory[4];

    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &src);
        MateriaSource &operator =(const MateriaSource &src);
        virtual ~MateriaSource();

        void learnMateria(AMateria *m);
        AMateria *createMateria(const std::string &type);
};

#endif
