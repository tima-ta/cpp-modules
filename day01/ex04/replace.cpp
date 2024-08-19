/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:06:22 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/17 14:29:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"replace.hpp"

Replace::Replace(std::string p_file, std::string p_s1, std::string p_s2)
    : file(p_file) , s1(p_s1) , s2(p_s2)
{
    std::string to_file = file + ".replace";

    fin.open(file.c_str());
    if (!fin.is_open())
    {
       std::cerr << "Cannot open file" << std::endl;
       exit(EXIT_FAILURE);
    }
    fout.open(to_file.c_str());
    if (!fout.is_open())
    {
       std::cerr << "Cannot open file" << std::endl;
       exit(EXIT_FAILURE);
    }
}

Replace::~Replace(void)
{
    if (fin.is_open())
        fin.close();
    if (fout.is_open())
        fout.close();
}

void check(int i, std::string input)
{
    if (!i && input.empty())
    {
        std::cerr << "Empty file" << std::endl;
        exit(EXIT_FAILURE);            
    } 
}

void    Replace::replacing_input(void)
{
    std::string input;
    std::string new_line;
    size_t         save;
    int         i, flg = 0, j = 0;
    int         len = s1.length();
    char c;

    while (1)
    {
        i = 0;
        if (fin.eof())
            break ;
        while (fin.get(c))
        {
            if (c == '\n')
            {
                flg = 1;
                break ;
            }
            input.push_back(c);
        }
        if (!input.empty())
        {
            while (1)
            {
                save = input.find(s1, i);
                if ((unsigned int)input.length() < save)
                {
                    new_line.append(input.substr(i, input.length() - i));
                    fout << new_line;
                    new_line.clear();
                    break ;
                }
                else
                {
                    new_line.append(input.substr(i, save));
                    new_line.append(s2);
                    i += (save + len);
                }
            }   
        }
        if (flg)
        {
            fout << '\n';
            flg = 0;
        }
        check(j, input);
        input.clear();
        j++;
    }
}
