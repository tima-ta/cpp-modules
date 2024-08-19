/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:53:34 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/15 08:49:09 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string s)
{
    type = s;
}

Weapon::~Weapon(void)
{
    
}

const std::string Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string new_one)
{
    type = new_one;
}
