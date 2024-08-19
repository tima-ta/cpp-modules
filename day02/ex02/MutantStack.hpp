/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:47:06 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/22 11:32:38 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<iostream>
#include<algorithm>
#include<stack>
#include<deque>
#include<vector>
#include<string>
#include<list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
        MutantStack() {}
        MutantStack(const MutantStack & rhs)
        {
            *this = rhs;
        }
        MutantStack & operator=(const MutantStack & rhs)
        {
            std::stack<T, Container>::operator=(rhs);
            return *this;
        }
        ~MutantStack() {}

        typedef typename Container::iterator iterator;
        iterator begin() {return this->c.begin(); }
        iterator end() {return this->c.end(); }

        iterator begin() const {return this->c.begin(); }
        iterator end() const {return this->c.end(); }
};

#endif