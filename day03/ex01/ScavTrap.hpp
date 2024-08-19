/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 08:59:35 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 09:54:11 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap & rhs);
        ScavTrap & operator=(const ScavTrap & rhs);
        ~ScavTrap(void);
        void    attack(const std::string& target);
        void    guardGate(void);
};

#endif