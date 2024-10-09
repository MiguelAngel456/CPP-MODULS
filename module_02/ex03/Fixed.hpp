/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:04:41 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/07 18:14:14 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int point;
    static const int num;
public:
    Fixed();
    Fixed(const int i);
    Fixed(const float i);
    ~Fixed();

    //getters y setters
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    
    //transformadores
    float toFloat( void ) const;
    int toInt( void ) const;
    
    Fixed(const Fixed &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
    Fixed &operator=(const Fixed& otro);
    //comparacion:
    bool operator<(const Fixed &f) const;
    bool operator>(const Fixed &f) const;
    bool operator==(const Fixed &f) const;
    bool operator!=(const Fixed &f) const;
    bool operator<=(const Fixed &f) const;
    bool operator>=(const Fixed &f) const;
    
    //operadores aritmeticos :
    Fixed operator+(const Fixed &f) const;
    Fixed operator-(const Fixed &f) const;
    Fixed operator*(const Fixed &f) const;
    Fixed operator/(const Fixed &f) const;

    //preincrementos y predecrementos(++V):
    Fixed &operator++();
    Fixed &operator--();
    
    //postincrementos y postdecrementos(V++):
    Fixed operator++(int);
    Fixed operator--(int);

    //minimos:
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);

    //maximos:
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};
    std::ostream &operator<<(std::ostream &o, const Fixed &f);
    
#endif