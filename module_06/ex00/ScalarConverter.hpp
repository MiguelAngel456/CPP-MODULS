/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:51:51 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/05 12:27:01 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <iostream>
#include <cmath> 
class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
        ScalarConverter &operator=(const ScalarConverter& otro);
    public:
        static void convert(char *str);

};
#endif