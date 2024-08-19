/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 08:59:11 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 09:49:38 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap: Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name) , HitPoints(10) , EnergyPoints(10) , AttackDamage(0)
{
    std::cout << "ClapTrap: Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & rhs)
{
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
    Name = rhs.Name;
    HitPoints = rhs.HitPoints;
    EnergyPoints = rhs.EnergyPoints;
    AttackDamage = rhs.AttackDamage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
{
    std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        Name = rhs.Name;
        HitPoints = rhs.HitPoints;
        EnergyPoints = rhs.EnergyPoints;
        AttackDamage = rhs.AttackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap: Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string & target)
{
    if (HitPoints < 0 || EnergyPoints < 0)
        return ;
    EnergyPoints -= 1;
    std::cout << "ClapTrap \"" << Name << "\" attacks \"" << target << "\", causing " << AttackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints < 0 || EnergyPoints < 0)
        return ;
    HitPoints -= amount;
    std::cout << "ClapTrap \"" << Name << "\" got damaged" << std::endl; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints < 0 || EnergyPoints < 0)
        return ;
    HitPoints += amount;
    EnergyPoints -= 1;
    std::cout << "ClapTrap  \"" << Name << "\" gets " << amount << " hit points back" << std::endl; 
}
