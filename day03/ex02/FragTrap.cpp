/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:46:30 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 10:12:22 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap: constrcutor called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap & rhs) : ClapTrap(rhs)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs)
{
    std::cout << "FragTrap: Copy assignment called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap: destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "High Fives requested" << std::endl;
}
