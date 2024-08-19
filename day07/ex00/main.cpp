/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:37:02 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/28 07:47:30 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2 || !av[1][0])
    {
        std::cout << "Invalid args" << std::endl;
        return 1;
    }
    
    BitcoinExchange obj;

    try
    {
        obj.saveData();
        obj.exchangeData(av[1]);
    }
    catch (const char * e)
    {
        std::cout << e;
        return 1;
    }
    return 0;
}
