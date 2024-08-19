/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:53:27 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/19 10:11:09 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"

class HumanB
{
private:
        std::string name;
        Weapon *wp_b;

public:
        HumanB(std::string nm);
        ~HumanB(void);
        void setWeapon(Weapon& wp);
        void attack(void);
};

#endif
