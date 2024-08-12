/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:23:48 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/05 15:48:13 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::num = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called\n";
    this->point = 0;
}
//INIZIALIZAR UN OBJETO CON DATOS DEL OTRO
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "copy constructor called\n";
    this->point = copy.point;
}
Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}
//COPIA EL CONTENIDO 
Fixed &Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called\n";
    this->point = copy.getRawBits();
	return (*this);
}


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