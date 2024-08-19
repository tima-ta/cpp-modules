/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:11:42 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/25 18:27:31 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Invalid number of args" << std::endl;
        return 1;
    }
    
    PmergeMe obj(ac - 1);
    try
    {
        obj.saveData(av);
        obj.sort();
    }
    catch(const char * e)
    {
        std::cerr << e;
        return 1;
    }
    return 0;
    
}
