/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:28:23 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/14 07:17:15 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string str);
    ~Zombie(void);
    void    announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
