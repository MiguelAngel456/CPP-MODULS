/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:01:23 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/08 18:15:06 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
//otra manera de inicializar, bastante mas optimo para optimizar 
Point::Point( void ):
    x(0),
    y(0)
{}
Point::Point(const float x, const float y):
    x(x),
    y(y) 
{}
Point::Point(const Point &p):
    x(p.getX()),
    y(p.getY())
{}
Point::~Point()
{

}

Point& Point::operator=(const Point& obj) 
{
  if (this != &obj) 
  {
    const_cast<Fixed&>(x) = obj.getX();
    const_cast<Fixed&>(y) = obj.getY();
  }
  return *this;
}
Fixed Point::getX() const
{
    return(x);
}
Fixed Point::getY() const
{
    return(y);
}

