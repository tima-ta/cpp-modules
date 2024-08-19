/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:57 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/11 10:32:20 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat obj("Eva", 900);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat obj("Eva", -10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat obj("Eva", 150);
        std::cout << obj;
        obj.decre();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat obj("Eva", 1);
        std::cout << obj;
        obj.incre();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}