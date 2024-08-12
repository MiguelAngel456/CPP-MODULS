/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:50:43 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/12 17:39:42 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
//CONSTRUCTOR VACIO
PhoneBook::PhoneBook(void)
{
    return ; 
}
//AÑADIR CONTACTO
void PhoneBook::add_contact(Contacts conta)
{
    static int i = 0;

    if (i == 8)
    {
        i = 0;
        std::cout << "Ya que has añadido mas de 8, se empezara a sustituir el contacto mas antiguo por este nuevo contacto"<< "\n";
    }
    contact[i] = conta;
    i++;
}
//ESTA FUNCION ES PURAMENTE PARA HACER COSAS ESTETICAS
static std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

static int  count_digit(int i)
{
    int digit = 0;
    if (i < 10)
        return (1);
    while (i < 10)
    {
        i = i%10;
        digit++;
    }
    return (digit);
}
//MOSTRAR EL CONTENIDO DEL ARRAU DE CONTACTO
void PhoneBook::mostrarContenidoArray(int tam) {
    int aux = 0;
    std::cout << "*********************************************"<< "\n";
    std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << "\n";
    std::cout << "*********************************************"<< "\n";
    for (int i = 0; i < tam; i++){
        if (contact[i].getFirstName().size() != 0)
        {
            std::cout << "|"<< add_spaces(10 - count_digit(i)) << i;
            if (contact[i].getFirstName().size() <= 10)
                std::cout << "|"<< add_spaces(10 - contact[i].getFirstName().size()) << contact[i].getFirstName();
            else
            {
                std::cout << "|";
                aux = 0;
                while (aux < 9)
                {
                    std::cout << contact[i].getFirstName()[aux];
                    aux++;
                }
                std::cout << ".";                
            }
            if (contact[i].getLastName().size() <= 10)
                std::cout << "|"<< add_spaces(10 - contact[i].getLastName().size()) << contact[i].getLastName();
            else
            {
                std::cout << "|";
                aux = 0;
                while (aux < 9)
                {
                    std::cout << contact[i].getLastName()[aux];
                    aux++;
                }
                std::cout << ".";                
            }
            if (contact[i].getNickname().size() <= 10)
                std::cout << "|"<< add_spaces(10 - contact[i].getNickname().size()) << contact[i].getNickname() << "|\n";
            else
            {
                std::cout << "|";
                aux = 0;
                while (aux < 9)
                {
                    std::cout << contact[i].getNickname()[aux];
                    aux++;
                }
                std::cout << ".|\n";                
            }
            std::cout << "*********************************************"<< "\n";
        }
    }
}

void PhoneBook::info_contact(int j)
{
    Contacts aux;
    bool     find = false;
    
    for (int i = 0; i < 8; i++){
        if (contact[i].getFirstName().size() != 0 && i == j)
        {
            aux = contact[i];
            find = true;
        }
    }
    if (find == false)
    {
        std::cout << "Ese Contacto no existe" << "\n";
        return;
    }
    std::cout << "Fist Name: " <<aux.getFirstName() << "\n";
    std::cout << "Last Name: " <<aux.getLastName() << "\n";
    std::cout << "Nickname: " <<aux.getNickname() << "\n";
    std::cout << "Phone number: " <<aux.getPhoneNumber() << "\n";
    std::cout << "Darkness secret: " <<aux.getSecret() << "\n";
}
