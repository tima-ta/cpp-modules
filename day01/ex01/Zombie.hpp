/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 07:13:50 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/14 09:36:25 by fraqioui         ###   ########.fr       */
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
    int i;
    Zombie(void);
    ~Zombie(void);
    void set_name(std::string nm);
    std::string get_name(void);
    void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
