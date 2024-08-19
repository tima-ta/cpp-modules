/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:28:23 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/04 16:26:24 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include"Fixed.hpp"

class Point
{
private:
        const Fixed x;
        const Fixed y;
public:
        Point(void);
        Point(const float a, const float b);
        Point(const Point & rhs);
        Point & operator=(const Point & rhs);
        ~Point(void);
        Fixed   getx(void) const;
        Fixed   gety(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
