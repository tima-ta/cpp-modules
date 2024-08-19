/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:29:35 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/17 11:31:11 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl obj;
        obj.complain(av[1]);
        return (0);
    }
    std::cerr << "Usage: ./Harl level" << std::endl;
    return (1);
}
