/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:00:17 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/28 15:16:55 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include "All.hpp"
class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria* mtr) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};



#endif