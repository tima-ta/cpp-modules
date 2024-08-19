/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 07:13:47 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/18 19:39:55 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(void)
{
    
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie number: " << i << " got  destroyed" << std::endl;
}

void        Zombie::set_name(std::string nm)
{
    name = nm;
}

std::string Zombie::get_name(void)
{
    return (name);
}

void    Zombie::announce(void)
{
    std::cout << '\"' << get_name() << '\"' << " got created" << std::endl;
}
