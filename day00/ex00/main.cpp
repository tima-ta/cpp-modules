/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:41:01 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/13 13:40:15 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        if (av[1][0] == 0)
            return (std::cout << "Invalid argument" << std::endl, 1);
        ScalarConverter::convert(av[1]);
        return 0;
    }
    std::cerr << "Invalid number of args" << std::endl;
    return 1;
}
