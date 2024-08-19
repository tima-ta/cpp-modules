/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:28:14 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/14 06:46:13 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie zombie(name);

    zombie.announce();
}
