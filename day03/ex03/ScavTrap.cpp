/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:00:25 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 10:45:52 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap: Default constrcutor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap: Constrcutor called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & rhs) : ClapTrap(rhs)
{
    std::cout << "ScavTrap: Copy Constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
{
    std::cout << "ScavTrap: Copy assignmant operator called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap: destructor called" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string & target)
{
    if (HitPoints < 0 || EnergyPoints < 0)
        return ;
    EnergyPoints -= 1;
    std::cout << "ScavTrap \"" << Name << "\" attacks \"" << target << "\", causing " << AttackDamage << " points of damage!" << std::endl;
}
