/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:57 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/12 09:27:45 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main(void)
{
    try
    {
        Form obj("Eva", 10, 150);
        std::cout << obj;
        Bureaucrat obj0("Ema", 8);
        obj0.decre();
        std::cout << obj0;
        obj0.signForm(obj);
        obj0.decre();
        std::cout << obj0;
        obj0.signForm(obj);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}