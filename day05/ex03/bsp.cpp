/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:28:19 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/05 09:59:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

static Fixed AreaCheck(Point const P1, Point const P2, Point const P3)
{
    Fixed ret;

    ret = ((P1.getx() * (P2.gety() - P3.gety()))
            + (P2.getx() * (P3.gety() - P1.gety()))
            + (P3.getx() * (P1.gety() - P2.gety()))) / 2;
    return ((ret > 0) ? ret : (ret * -1));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   AreA0 = AreaCheck(a, b, c);
    Fixed   AreA1 = AreaCheck(point, b, c);
    Fixed   AreA2 = AreaCheck(a, point, c);
    Fixed   AreA3 = AreaCheck(a, b, point);
    return (AreA0 == AreA1 + AreA2 + AreA3);
}
