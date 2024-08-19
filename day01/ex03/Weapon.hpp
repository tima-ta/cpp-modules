/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:53:37 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/15 08:48:39 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
        std::string type;
public:
        Weapon(std::string s);
        ~Weapon(void);
        const std::string   getType(void);
        void                setType(std::string new_one);
};

#endif