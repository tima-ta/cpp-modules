/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:46:36 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 10:09:19 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
        FragTrap(void);
        FragTrap(const std::string name);
        FragTrap(const FragTrap & rhs);
        FragTrap & operator=(const FragTrap & rhs);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif
