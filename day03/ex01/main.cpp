/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 08:59:27 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 10:06:36 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

static void call_attack(ClapTrap & obj)
{
    obj.attack("Enemy");
}

int main(void)
{
    ClapTrap player0("first");
    ScavTrap player1("second");

    call_attack(player0);
    call_attack(player1);
    player1.guardGate();
    player1.beRepaired(200);
}
