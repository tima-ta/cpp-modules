/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:25:47 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/17 11:38:45 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

template <typename T> void func(T const & element)
{
    std::cout << "f applied to: " << element << std::endl;
}

template <typename T> void iter(T *tab, unsigned int len, void (*f)(T const &))
{
    std::cout << "\n\t\tIter called " << std::endl;
    for (unsigned int i = 0; i < len; i++)
        f(tab[i]);
}

#endif