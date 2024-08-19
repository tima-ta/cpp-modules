/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:50:10 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/17 10:06:21 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array
{
private:
        unsigned int  range;
        T                   *ar;

public:
        Array();
        Array(unsigned int n);
        Array(const Array & rhs);
        Array & operator=(const Array & rhs);
        ~Array();

        T       & operator[](unsigned int i) const;
        size_t  size() const;

        class OutOfBounds : public std::exception
        {
        public:
                const char * what() const throw() { return "Error in array limits: the given index is out of range";}
        };
};

template <typename T> Array<T>::Array() : ar (new T()) , range(0)
{
    
}

template <typename T> Array<T>::Array(unsigned int n) : range(n)
{
    ar = new T[n];
}

template <typename T> Array<T>::Array(const Array & rhs) : range(rhs.size())
{
    ar = new T[range];

    for (unsigned int i = 0; i < range; i++)
        ar[i] = rhs.ar[i];
}

template <typename T> Array<T> & Array<T>::operator=(const Array &rhs)
{
    delete [] ar;

    range = rhs.size();

    ar = new T[range];

    for (unsigned int i = 0; i < range; i++)
        ar[i] = rhs.ar[i];

    return *this;
}

template <typename T> Array<T>::~Array()
{
    delete [] ar;
}

template <typename T> T & Array<T>::operator[](unsigned int i) const
{
    if (i >= range)
        throw OutOfBounds();
    return ar[i];
}

template <typename T> size_t Array<T>::size() const
{
    return range;
}

#endif