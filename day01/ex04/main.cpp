/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:06:16 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/19 10:07:07 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"replace.hpp"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (!av[2][0])
            return (std::cerr << "Empty string\n", 1);
        Replace file(av[1], av[2], av[3]);
        file.replacing_input();
        std::cout << "Done replacing string" << std::endl;
        return (0);
    }
    std::cerr << "Usage: <filename> <first string> <second string>" << std::endl;
    return (1);
}
