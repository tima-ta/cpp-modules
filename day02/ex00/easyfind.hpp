/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:27:40 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/20 10:17:41 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<algorithm>

template <typename T> void easyFind(T in, int what)
{
    typename T::iterator toFind = find(in.begin(), in.end(), what);

    if (toFind != in.end())
        std::cout << "Element found: " << *toFind << std::endl;
    else
        throw "Element not found";
}

#endif