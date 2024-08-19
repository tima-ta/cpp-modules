/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:00:06 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 12:28:38 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string save) : ClapTrap(save) , ScavTrap(save) , FragTrap(save)
{
    std::cout << "DiamondTrap: constrcutor called" << std::endl;
    name = save;
    Name += "_clap_name";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap & rhs) : ClapTrap(rhs) , ScavTrap(rhs) , FragTrap(rhs)
{
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap: destructor called" << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My name is: \"" << name << "\" and my ClapTrap name is: \"" << Name << "\"" << std::endl;
}
