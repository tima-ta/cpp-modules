/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 08:59:16 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 09:48:33 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main(void)
{
    ClapTrap player("From");

    player.attack("To");
    player.beRepaired(1);
    player.takeDamage(1);
}
