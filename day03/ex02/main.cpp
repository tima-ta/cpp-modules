/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 08:59:27 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/18 11:00:16 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

static void call_attack(ClapTrap & obj)
{
    obj.attack("Enemy");
}

int main(void)
{
    ClapTrap player0("first");
    FragTrap player1("second");
    call_attack(player0);
    call_attack(player1);
    player1.beRepaired(200);
}
