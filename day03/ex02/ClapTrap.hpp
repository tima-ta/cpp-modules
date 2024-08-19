/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 08:59:25 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 10:08:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
protected:
        std::string Name;
        int         HitPoints;
        int         EnergyPoints;
        int         AttackDamage;

public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap & rhs);
        ClapTrap& operator=(const ClapTrap & rhs);
        virtual ~ClapTrap(void);
        virtual void    attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
};

#endif
