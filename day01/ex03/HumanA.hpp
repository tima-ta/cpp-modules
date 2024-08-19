/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:53:20 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/19 10:10:59 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
private:
        std::string name; 
        Weapon& wp_a;

public:
        HumanA(std::string nm, Weapon& wp);
        ~HumanA(void);
        void attack(void);
};

#endif
