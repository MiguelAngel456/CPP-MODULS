/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:04:57 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/08 15:24:48 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"


class Point
{
private:
   const Fixed x;
   const Fixed y;
public:
    //contructores
    Point();
    Point(const float x, const float y);
    Point(const Point &p);
    ~Point();
    //sobrecarga
    Point &operator=(const Point& otro);
    //getters
    Fixed getX() const;
    Fixed getY() const;



};

#endif