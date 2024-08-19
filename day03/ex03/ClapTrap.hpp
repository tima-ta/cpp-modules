/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:00:03 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/20 08:35:34 by fraqioui         ###   ########.fr       */
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
