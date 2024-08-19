/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:27:42 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/20 10:20:49 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include<vector>
#include<forward_list>

int main()
{
    std::vector<int> Obj;
    std::forward_list<int> var;

    for (int i(0); i < 10; i++)
        Obj.push_back(i);

    for (int i(20); i < 100; i++)
        var.push_front(i);

    try
    {
        easyFind(Obj, 2);
        easyFind(Obj, 100);
    }
    catch(const char * s)
    {
        std::cerr << s << '\n';
    }

    try
    {
        easyFind(var, 99);
        easyFind(var, -9);
    }
    catch(const char * s)
    {
        std::cerr << s << '\n';
    }

    return 0;
}
