/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:55:46 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/27 09:12:22 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

RPN::RPN()
{
    
}

RPN::~RPN()
{
    
}

void    RPN::calc(std::string opr)
{
    int oper1, oper2, len = opr.length();
    
    for (int i(0); i < len; i += 2)
    {
        if (isdigit(opr[i]))
        {
            st.push(std::atoi((opr.substr(i, 1)).c_str()));
            if (i + 1 != len && opr[i + 1] != ' ')
                throw "Error\n";
        }
        else if (st.size() > 1 && (opr[i] == '+' || opr[i] == '-' || opr[i] == '*' || opr[i] == '/'))
        {
            oper2 = st.top();
            st.pop();
            oper1 = st.top();
            st.pop();
            if (opr[i] == '+')
                oper1 += oper2;
            if (opr[i] == '-')
                oper1 -= oper2;
            if (opr[i] == '*')
                oper1 *= oper2;
            if (opr[i] == '/')
            {
                if (!oper2)
                    throw "Error\n";
                oper1 /= oper2;
            }
            if (i + 1 != len && opr[i + 1] != ' ')
                throw "Error\n";
            st.push(oper1);
        }
        else
            throw "Error\n";
    }

    if (st.size() != 1)
        throw "Error\n";
    std::cout << oper1 << std::endl;
}