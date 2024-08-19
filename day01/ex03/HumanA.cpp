/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:53:17 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/15 08:55:23 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon& wp) : name(nm) , wp_a(wp)
{
    
}

HumanA::~HumanA(void)
{
    
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with thier " << wp_a.getType() << std::endl;
}
