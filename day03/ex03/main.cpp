/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:00:20 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/19 15:36:30 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

int main(void)
{
    DiamondTrap player("New");

    player.attack("Enemy");
    player.whoAmI();
}
//845