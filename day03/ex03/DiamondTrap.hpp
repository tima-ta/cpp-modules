/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:00:12 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/20 08:31:20 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include"FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
        std::string name;

public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap & rhs);
        DiamondTrap & operator=(const DiamondTrap & rhs);
        ~DiamondTrap(void);
        void    attack(const std::string& target);
        void    whoAmI(void);
};

#endif