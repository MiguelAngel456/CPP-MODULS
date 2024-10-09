/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:08:09 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/21 17:04:25 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
static float area(Point a, Point b, Point c)
{
    float area = 0;

    area = (  (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()))
            + (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()))
            + (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))
            )/2;
    if (area < 0)
        return (area * -1); 
    return(area);
}   
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float ab, a1, a2, a3;
    
    ab = area(a, b ,c);
    a1 = area(point, a, b);
    a2 = area(point, a, c);
    a3 = area(point, b, c);
    std::cout << a3 << "\n-------\n";
    if (a1 + a2 + a3 == ab)
        return true;
    return false;
}