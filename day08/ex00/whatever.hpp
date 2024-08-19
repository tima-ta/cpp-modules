/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:33:18 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/15 10:54:06 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T & a, T & b)
{
    T tmp;
    
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T> T & min(T & a, T & b)
{
    return (a < b ? a : b);
}

template <typename T> T & max(T & a, T & b)
{
    return (a <= b ? b : a);
}

#endif