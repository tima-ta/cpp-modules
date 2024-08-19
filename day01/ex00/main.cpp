/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:28:00 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/19 11:13:22 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Zombie.hpp"

int main(void)
{
    Zombie  *obj = newZombie("Foo_out");
    obj->announce();
    randomChump("Foo_in");
    delete obj;
    return (0);
}
