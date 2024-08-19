/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:53:24 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/19 10:13:32 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string nm) : name(nm), wp_b(NULL)
{

}

HumanB::~HumanB(void)
{
    
}

void    HumanB::attack(void)
{
    if (wp_b == NULL || wp_b->getType().empty())
        std::cout << name << " has no weapon" << std::endl;
    else
        std::cout << name << " attacks with thier " << wp_b->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &wp)
{
    wp_b = &wp;
}
