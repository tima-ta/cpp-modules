/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 07:13:53 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/14 09:36:43 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie      *zombies = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombies[i].i = i + 1;
        zombies[i].set_name(name);
        std::cout << "Zombie number: " << i + 1 << " with name: ";
        zombies[i].announce();
    }
    return (zombies);
}
