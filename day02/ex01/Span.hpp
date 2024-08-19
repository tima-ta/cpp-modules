/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:23:20 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/20 11:44:55 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<queue>

class Span
{
private:
        unsigned int N;
        unsigned int check;
        std::vector<int> Vec;

public:
        Span();
        Span(unsigned int num);
        Span(const Span & rhs);
        Span & operator=(const Span & rhs);
        ~Span();
        
        int longestSpan();
        int shortestSpan();
        
        void addNumber(int n);
        void fillNums(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        
        class OutofRange : public std::exception
        {
        public:
                const char * what() const throw() { return "You are out of range";}
        };

        class NoSpan : public std::exception
        {
        public:
                const char * what() const throw() { return "No span can be found";}
        };
};

#endif