/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:29:41 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/17 11:46:16 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl( void )
{

}

Harl::~Harl( void )
{

}

void    Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!\n" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!\n" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I\'ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void    Harl::complain( std::string level )
{
    int check = 0;

    std::string which[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for ( ; check < 4; check++)
    {
        if (level == which[check])
            break ;
    }
    switch (check)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break ;
        
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
