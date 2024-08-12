/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:40:13 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/05 16:52:18 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::num = 8;
//CONSTRUCTORES
Fixed::Fixed(void)
{
    std::cout << "Default constructor called\n";
    this->point = 0;
}
//----INIZIALIZAR UN OBJETO CON DATOS DEL OTRO
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "copy constructor called\n";
    this->point = copy.point;
}
//----INIZIALIZA CON UN INT, SE USA QUE EN CASO DE QUERER TRABAJAR CON DECIMALES
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called\n";
    this->point = value << num;
}
//----INIZIALIZA CON UN FLOAT, SE USA QUE EN CASO DE QUERER TRABAJAR CON DECIMALES
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called\n";
    this->point = roundf(value * (1 << num));
}

//DESTRUCTOR
Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}


//ESTABLECE EL COMPORTAMIENTO DE LOS OPERADORES MENCIONADOS DESPUES DE LA PALABRA OPERATORS
//COPIA EL CONTENIDO 
Fixed &Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called\n";
    this->point = copy.getRawBits();
	return (*this);
}
std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
    o << f.toFloat();
    return (o);
}
    
//GETTERS AND SETTERS
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (this->point);
}
void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called\n";
    this->point = raw;   
}
//PARA TRANSFORMAR
int Fixed::toInt( void ) const
{
    return (this->point >> num);
}

float	Fixed::toFloat(void)const
{
	return ((float)this->point / (float)(1 << this->num));
}


