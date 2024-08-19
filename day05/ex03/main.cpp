/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:35:51 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/05 10:00:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

int main( void )
{
    std::cout << "Test_1___________________\n" << std::endl;
    Point a(0,1);
    Point b(25,25);
    Point c(0, 30);
    Point p(0, 30);
    if (bsp(a, b, c, p))
        std::cout << "Inside\n" << std::endl;
    else
        std::cout << "Outside\n" << std::endl;
    std::cout << "Test_2___________________\n" << std::endl;
    Point a1(0,1);
    Point b1(25,25);
    Point c1(0, 30);
    Point p1(0, 31);
    if (bsp(a1, b1, c1, p1))
        std::cout << "Inside\n" << std::endl;
    else
        std::cout << "Outside\n" << std::endl;
    std::cout << "Test_3___________________\n" << std::endl;
    Point a2(-10, -40);
    Point b2(0, 0);
    Point c2(10, -40);
    Point p2(0, -2);
    if (bsp(a2, b2, c2, p2))
        std::cout << "Inside\n" << std::endl;
    else
        std::cout << "Outside\n" << std::endl;
}
