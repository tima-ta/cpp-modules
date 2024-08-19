/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:25:45 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/17 11:38:06 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int         b[5] = {1, 2, 3, 4, 5};
    bool        str[2] = {true, false};
    float       fl[3] = {3.1f, 0.5f, 9.0f};
    std::string tab[2] = {"String1", "String2"};

    std::cout << "-------- Integers -------" << std::endl;
    iter<int>(b, 5, func<const int>);
    
    std::cout << "\n-------- Boolean -------" << std::endl;
    iter<bool>(str, 2, func);

    std::cout << "\n-------- Floats -------" << std::endl;  
    iter<float>(fl, 3, func);

    std::cout << "\n-------- Strings -------" << std::endl;
    iter<std::string>(tab, 2, func);

    return 0;
}