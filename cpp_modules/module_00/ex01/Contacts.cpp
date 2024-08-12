/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:25:08 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/12 17:04:35 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
//CONTRUCTOR:
//SIRVE PARA PORDER CREAR INSTACIAS DE OBJETO TIPO CONTACTOS
Contacts::Contacts(std::string f_name, std::string l_name, std::string nickname, std::string number, std::string secret)
{
    this->first_name = f_name;
    this->last_name = l_name;
    this->nickname = nickname;
    this->phone_number = number;
    this->secret = secret;

    return ;
}
Contacts::Contacts()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	secret = "";
	return;
}

//LOS GETTERS SON PARA PODER ACCERDER A LAS VARIABLES PRIVADAS
std::string Contacts::getFirstName() const { 
    return first_name; 
}
std::string Contacts::getLastName() const {
    return last_name;
}
std::string Contacts::getNickname() const {
    return nickname; 
}
std::string Contacts::getPhoneNumber() const {
    return phone_number; 
}
std::string Contacts::getSecret() const {
    return secret;
}
int Contacts::getId() const {
    return id;
}
