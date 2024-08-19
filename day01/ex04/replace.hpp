/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:06:25 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/16 13:59:38 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include<iostream>
#include<fstream>
#include<exception>
#include<string>


class Replace
{
private:
        std::string         file;
        std::string         s1;
        std::string         s2;
        std::ifstream       fin;
        std::ofstream       fout;
public:
    Replace(std::string p_file, std::string p_s1, std::string p_s2);
    ~Replace(void);
    void replacing_input(void);
};

#endif
