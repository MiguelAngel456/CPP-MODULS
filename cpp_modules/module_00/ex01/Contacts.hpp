/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:55:14 by mfuente-          #+#    #+#             */
/*   Updated: 2024/06/26 10:00:30 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <string>

class Contacts
{
    private: //NO PUEDEN ESTAR VACIOS
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string secret;
        int          id;
    public:
        Contacts(std::string f_name, std::string l_name, std::string nickname, std::string number, std::string secret);
        Contacts();
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getSecret() const;
        int getId() const;
    
};

#endif