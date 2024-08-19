/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:55:41 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/28 07:51:34 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2 || !av[1][0])
    {
        std::cout << "Invalid args" << std::endl;
        return 1;
    }
    
    RPN obj;
    try
    {
        obj.calc(av[1]);
    }
    catch (const char * e)
    {
        std::cout << e;
        return 1;
    }
    return 0;
}
