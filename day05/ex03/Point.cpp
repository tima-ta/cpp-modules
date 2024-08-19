/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:28:07 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/05 09:12:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

Point::Point(void) : x(0) , y(0)
{

}

Point::~Point(void)
{

}

Point::Point(const float a, const float b) : x(a) , y(b)
{

}

Point::Point(const Point & rhs) : x(rhs.getx()) , y(rhs.gety())
{

}

Point & Point::operator=(const Point & rhs)
{
    if (this != &rhs)
    {
       (Fixed) x = rhs.getx();
       (Fixed) y = rhs.gety();
    }
    return (*this);
}

Fixed Point::getx(void) const
{
    return (x);
}

Fixed Point::gety(void) const
{
    return (y);
}
