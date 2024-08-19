/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:35:50 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/17 11:33:37 by fraqioui         ###   ########.fr       */
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
    std::cout << "I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
    p_func f[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string which[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == which[i])
        {
            (this->*f[i])();
            break ;
        }
        if (i + 1 == 4)
            std::cout << "Invalid level" << std::endl;
    }
} 
