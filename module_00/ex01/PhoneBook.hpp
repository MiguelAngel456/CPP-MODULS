/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:47:04 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/12 12:39:06 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "Contacts.hpp"
#include <cstdlib>

class PhoneBook
{
    private: //NO PUEDEN ESTAR VA
        Contacts    contact[8];
    public:
        PhoneBook();
        void mostrarContenidoArray(int tam);
        void add_contact(Contacts conta);
        void search_contact();
        void info_contact(int i);
    
};

#endif