/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:41:04 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/14 15:31:25 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

void    is_float(std::string s, int *flg)
{
    int k = 0;
    int i = 0;

    if (s.find('.') == std::string::npos || s.at(s.length() - 1) != 'f')
        return ;
    if (s.at(i) == '+' || s.at(i) == '-')
        i++;
    while (i < int(s.length() - 1))
    {
        if (s.at(i) == '.')
            k++;
        else if (!isdigit(s.at(i)))
            return ;
        i++;
    }
    if (k != 1)
        return ;
    *flg = 1;
}

void       is_double(std::string s, int *flg)
{
    int k = 0;
    int i = 0;

    if (*flg || s.find('.') == std::string::npos)
        return ;
    if (s.at(i) == '+' || s.at(i) == '-')
        i++;
    while (i < int(s.length()))
    {
        if (s.at(i) == '.')
            k++;
        else if (!isdigit(s.at(i)))
            return ;
        i++;
    }
    if (k != 1)
        return ;
    *flg = 2;   
}

void       is_integer(std::string s, int *flg)
{
    int i = 0;

    if (*flg)
        return ;
    if (s.at(i) == '+' || s.at(i) == '-')
        i++;
    while (i < int(s.length()))
    {
        if (!isdigit(s.at(i)))
            return ;
        i++;
    }   
    *flg = 3;
}

void       is_character(std::string s, int *flg)
{
    if (*flg)
        return ;
    if (!(s.length() == 1 && isalpha(s.at(0))))
        return ;
    *flg = 4;
}

void    is_limit(std::string s, int *flg)
{
    if (*flg)
        return ;
    if (!s.compare("-inff") || !s.compare("+inff")
        || !s.compare("-inf") || !s.compare("+inf")
        || !s.compare("nanf") || !s.compare("nan"))
        *flg = 5;
}

void    is_other(std::string s, int *flg)
{
    (void) s;

    if (*flg)
        return ;
    *flg = 6;
}

void check_char(char c)
{
    if (!isprint(c) || c >= 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
}

void    printInteger(std::string s)
{
    int     save = std::stoi(s);

    check_char(static_cast<char>(save));
    std::cout << "int: " << save << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(save) << 'f' << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(save) << std::endl;
}

void    printFloat(std::string s)
{
    s.pop_back();
    float save = std::stof(s);

    check_char(static_cast<char>(save));
    std::cout << "int: " << static_cast<int>(save) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << save << 'f' << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(save) << std::endl;
}

void    printDouble(std::string s)
{
    double save = std::stod(s);

    check_char(static_cast<char>(save));
    std::cout << "int: " << static_cast<int>(save) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(save) << 'f' << std::endl;    
    std::cout << "double: " << std::fixed << std::setprecision(1) << save << std::endl;
}

void    printCharacter(std::string s)
{
    char c = s[0];

    check_char(c);
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: "  << static_cast<float>(c) << ".0" << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void    printLimit(std::string s)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (s.at(0) == '+' && s.at(1) == 'i')
    {
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;  
    }
    else if (s.at(0) == '-' && s.at(1) == 'i')
    {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;    
    }   
    else
    {
        std::cout << "float: nanf" << std::endl; 
        std::cout << "double: nan" << std::endl;           
    }
}

void    printOther(std::string s)
{
    (void) s;

    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n"; 
    std::cout << "float: impossible\n"; 
    std::cout << "double: impossible\n";   
}

void    print_infos(std::string s, int flg)
{
   print_func f[] = {&printFloat, &printDouble, &printInteger, &printCharacter, &printLimit, &printOther};

   (*f[flg - 1])(s);
}

void    ScalarConverter::convert(std::string ltrl)
{
    int flg = 0;

    is_float(ltrl, &flg);
    is_double(ltrl, &flg);
    is_integer(ltrl, &flg);
    is_character(ltrl, &flg);
    is_limit(ltrl, &flg);
    is_other(ltrl, &flg);
    print_infos(ltrl, flg);
}
