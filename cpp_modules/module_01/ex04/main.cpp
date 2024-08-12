/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:47:57 by mfuente-          #+#    #+#             */
/*   Updated: 2024/07/29 15:37:05 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

//UTILIZAR ERASE PARA BORRAR LA PALABRA REMPLAZABLE
//UTILIZAR INSERT PARA INSERTAR EN UNA POSICION
//UTILIZAR FIND PARA ENCONTRAR LA POSCION DEL LA PALABRA A SUSTITUIR
std::string remplace_line(std::string line, std::string s1, std::string s2)
{
    int pos = 0;
    
    while (line.find(s1, pos) != std::string::npos)
    {
        pos = line.find(s1, pos);
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
    return (line);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);
    if (argv[1] == NULL || ( argv[1] != NULL && argv[2] == NULL) || (argv[2] != NULL && argv[3] == NULL))
        return (1);
    char *file = argv[1];
    std::string s1 = argv[2];   //REMPLAZABLE
    std::string s2 = argv[3];   //REMPLAZO
    std::ifstream archivoEntrada;
    std::ofstream archivoSalida;
        
    archivoEntrada.open(file);
    archivoSalida.open("ArchivoSalida.txt");
    if (!archivoEntrada.is_open() || !archivoSalida.is_open()) 
    {
        std::cout << "No se pudo abrir el archivo.\n";
        return (1);
    }
    std::string linea;
    while (std::getline(archivoEntrada, linea))
        archivoSalida << remplace_line(linea, s1, s2) << std::endl;
    archivoEntrada.close();
    archivoSalida.close();
    return (0);
}