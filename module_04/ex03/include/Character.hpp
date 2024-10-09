/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:21:39 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/28 15:16:45 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "All.hpp"
class Character : public ICharacter
{
    protected:
        std::string name;
        AMateria *inventory[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character &type);
        Character &operator=(const Character& other);
        ~Character();

        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

};
#endif