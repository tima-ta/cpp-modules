/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:00:18 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 12:28:29 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
        FragTrap & operator=(const FragTrap & rhs);
public:
        FragTrap(void);
        FragTrap(const std::string name);
        FragTrap(const FragTrap & rhs);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif
