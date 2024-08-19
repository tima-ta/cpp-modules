/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 07:13:41 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/14 09:50:35 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
    std::cout << "Start creating zombies: " << std::endl;
    Zombie *ret = zombieHorde(7, "Foo");
    delete[] ret;
    return (0);
}
