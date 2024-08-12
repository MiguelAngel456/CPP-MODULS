/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:40:13 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/08 12:23:55 by mfuente-         ###   ########.fr       */
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
//COMPARACIONES:
bool Fixed::operator<(const Fixed &f) const
{
    return(this->point < f.point);
}
bool Fixed::operator>(const Fixed &f) const
{
    return(this->point > f.point);
}
bool Fixed::operator==(const Fixed &f) const
{
    return(this->point == f.point);
}
bool Fixed::operator!=(const Fixed &f) const
{
    return(this->point != f.point);
}
bool Fixed::operator<=(const Fixed &f) const
{
    return(this->point <= f.point);
}
bool Fixed::operator>=(const Fixed &f) const
{
    return(this->point == f.point);
}

//OPERADORES ARITMETICOS:
Fixed Fixed::operator+(const Fixed &f) const
{
    return(Fixed(this->toFloat() + f.toFloat()));
}
Fixed Fixed::operator-(const Fixed &f) const
{
    return(Fixed(this->toFloat() - f.toFloat()));
}
Fixed Fixed::operator*(const Fixed &f) const
{
    return(Fixed(this->toFloat() * f.toFloat()));
}
Fixed Fixed::operator/(const Fixed &f) const
{
    return(Fixed(this->toFloat() / f.toFloat()));
}

//PREINCREMETO Y PREDECREMENTO
Fixed &Fixed::operator++()
{
    this->point++;
    return(*this);
}
Fixed &Fixed::operator--()
{
    this->point--;
    return(*this);
}


//POSTINCREMENTO U POSTDECREMENTO
Fixed Fixed::operator++(int)
{
    Fixed aux = *this;
    aux.point++;
    return(aux);
}
Fixed Fixed::operator--(int)
{
    Fixed aux = *this;
    aux.point--;
    return(aux);
}

//MINIMOS:
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return(a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return(a);
    return (b);
}

//MAXIMO:
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a < b)
        return(b);
    return (a);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return(b);
    return (a);
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


