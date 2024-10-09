/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:05:26 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/20 13:06:14 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "PhoneBook.hpp"

static bool	ft_isdigit(std::string str)
{
    int i = 0;

    while (i < (int)str.size())
    {
	    if (str[i] < '0' || str[i] > '9')
		    return (false);
        i++;
    }
	return (true);
}

static int	ignorar_espacios(int cont, std::string str)
{
	while (str[cont] == '\t' || str[cont] == '\n'
		|| str[cont] == '\v' || str[cont] == '\f'
		|| str[cont] == '\r' || str[cont] == ' ')
		cont++;
	return (cont);
}

static int	ft_atoi(std::string str)
{
	int		cont;
	int		num_final;
	std::string	original;
	char	signo;

	cont = 0;
	num_final = 0;
	original = str;
	cont = ignorar_espacios(cont, original);
	signo = str[cont];
	if ((signo != '+' && signo != '-') && (signo < '0' || signo > '9'))
		return (-1);
	if ((signo == '+' || signo == '-'))
		cont++;
	while (str[cont] != '\0' && (str[cont] >= '0' && str[cont] <= '9'))
	{
		num_final = num_final * 10 + (str[cont] - '0');
		cont++;
	}
	if (signo == '-')
		num_final = num_final * -1;
	return (num_final);
}

//FUNCION ENCARGADA DE PEDIR LOS DATOS PARA CREAR UN NUEVO CONTACTO
void ft_add(PhoneBook *pb)
{
    std::string array[5];
    int i = 0;
    while (i < 5){
        do{
            switch (i)
            {
                case 0:
                    std::cout << "introduce the first name: ";
                    std::cin >> array[0];
                    break;
                case 1:
                    std::cout << "introduce the last name: ";
                    std::cin >> array[1];
                    break;
                case 2:
                    std::cout << "introduce the nickname: ";
                    std::cin >> array[2];
                    break;
                case 3:
                    do{
                        std::cout << "introduce the phone number: ";
                        std::cin >> array[3]; 
                    }while (ft_isdigit(array[3]) == false);
                    break;
                case 4:
                    std::cout << "introduce the darkest secret: ";
                    std::cin >> array[4];
                    break;
                default:
                    break;
            }
        }while(array[i] == "");
        i++;
    }
    Contacts Contacts(array[0], array[1], array[2], array[3], array[4]);
    pb->add_contact(Contacts);
}

void ft_search(PhoneBook *pb)
{
    int num;
    std::string imput = "";
    pb->mostrarContenidoArray(8);
    do{
        std::getline(std::cin, imput);
        if (std::cin.eof() == true)
        {
            std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
            num = -1;
            return;
        }
        num = ft_atoi(imput);   
    }while(num < 0);
    if (num >= 0)
        pb->info_contact(num);
}

int main(int argc,char *argv[])
{
    std::string imput = "";
    PhoneBook   pb;

    (void) argc;
    (void) argv;
    std::cout << "******************************************"<< "\n";
    std::cout << "|INTRODUCE UNA DE LAS SIGUIENTES OPCIONES|\n|\t➕ ADD\t\t\t\t |\n|\t🔍 SEARCH\t\t\t |\n|\t🔚 EXIT\t\t\t\t |" << "\n";
    std::cout << "******************************************"<< "\n";
    while (imput != "EXIT")
    {
        std::cout << ">";
        std::getline(std::cin, imput);
        if (std::cin.eof()) {
            break;
        }
        if (imput == "ADD")
            ft_add(&pb); 
        if (imput == "SEARCH")
            ft_search(&pb); 
    }
}

