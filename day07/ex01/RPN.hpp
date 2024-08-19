/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:55:52 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/25 18:01:36 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include<iostream>
#include<string>
#include<stack>

class RPN
{
private:
        std::stack<int> st;

        RPN(const RPN & rhs);
        RPN & operator=(const RPN & rhs);

public:
        RPN();
        ~RPN();

        void    calc(std::string opr);
};

#endif