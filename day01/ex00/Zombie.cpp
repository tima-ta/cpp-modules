/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:28:20 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/14 07:09:46 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(std::string str)
{
    name = str;
}

Zombie::~Zombie(void)
{
    std::cout << "destroy: " << name << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
