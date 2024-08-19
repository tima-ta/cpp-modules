/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:23:17 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/22 11:37:16 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span() : N(0) , check(0)
{
    
}

Span::Span(unsigned int num) : N(num) , check(0)
{
    
}

Span::Span(const Span & rhs) : N(rhs.N)
{
    std::copy(rhs.Vec.begin(), rhs.Vec.end(), Vec.begin());
}

Span & Span::operator=(const Span & rhs)
{
    N = rhs.N;
    std::copy(rhs.Vec.begin(), rhs.Vec.end(), Vec.begin());
    return *this;
}

Span::~Span()
{

}

int Span::longestSpan()
{
    int ret;

    if (check < 2)
        throw NoSpan();

    ret = *max_element(Vec.begin(), Vec.end()) - *min_element(Vec.begin(), Vec.end());

    return ret;
}

int Span::shortestSpan()
{
    if (check < 2)
        throw NoSpan();
    int save = longestSpan();
    int diff = longestSpan();

    for (std::vector<int>::iterator v = Vec.begin(); v != Vec.end(); v++)
    {
        for (std::vector<int>::iterator z = Vec.begin(); z != Vec.end(); z++)
        {
            if (v == z)
                continue ;
            diff = (*z - *v < 0) ? (*z - *v) * -1 : *z - *v;
            if (diff < save)
                save = diff;
        }
    }
    return save;
}

void Span::addNumber(int n)
{
    if (check >= N)
        throw OutofRange();
    check++;
    Vec.push_back(n);
}

void Span::fillNums(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (check >= N || N - check < end - begin)
        throw OutofRange();
    Vec.insert(Vec.begin() + check, begin, end);
    check += end - begin;
}
