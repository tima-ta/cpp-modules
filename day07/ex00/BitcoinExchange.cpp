/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:36:50 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/28 07:49:34 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    
}

BitcoinExchange::~BitcoinExchange()
{
    
}

void    BitcoinExchange::exgExec(std::string date, float & value)
{
    if (data.find(date) != data.end())
        std::cout << date << " => " << value << " = " << value * data[date] << std::endl;
    else
    {
        std::map<std::string, float>::iterator it = data.upper_bound(date);
        if (it == data.begin())
            throw "Error: bad input";
        --it;
        std::cout << date << " => " << value << " = " << value * it->second << std::endl;
    }
}

void    BitcoinExchange::parse_input(std::string & line)
{
    std::string year, month, day, value;
    int         yr, mn, dy;
    float val;

    if (line.length() < 14 || line.at(11) != '|' || line.at(4) != '-' || line.at(7) != '-' || line.at(10) != ' ' || line.at(12) != ' ')
        throw "Error: bad input";
    
    int len = line.length();
    for (int i(0); i < 10; i++)
    {
        if (i == 4 || i == 7)
            continue ;
        if (!isdigit(line[i]))
            throw "Error: bad input";
    }

    int flg = 0;
    for (int i(13); i < len; i++)
    {
        if (i == 13 && line[i] == '-')
            continue ;
        if (line[i] == '.')
            flg++;
        else if (!isdigit(line[i]))
            throw "Error: bad input";
    }

    if (line.at(13) == '-')
        throw "Error: not a positive number.";

    if (flg > 1)
        throw "Error: bad input";
        
    year = line.substr(0, 4);
    yr = std::atoi(year.c_str());

    month = line.substr(5, 2);
    mn = std::atoi(month.c_str());

    day = line.substr(8, 2);
    dy = std::atoi(day.c_str());

    value = line.substr(13, len - 13);
    val = std::atof(value.c_str());

    if (yr < 2009 || yr > 2022 || mn < 1 || mn > 12 || dy < 1 || dy > 31)
        throw "Error: bad input";
    
    if (val > 1000)
        throw "Error: too large a number.";
    try
    {
        exgExec(line.substr(0, 10), val);    
    }
    catch (const char * e)
    {
        std::cerr << e << " => " << line << std::endl;
    }
}

void    BitcoinExchange::exchangeData(std::string file)
{
    std::ifstream fin(file.c_str());
    std::string line;
    int         flg = 0;
    
    if (!fin)
        throw "Failed to open file\n";
    
    while (getline(fin, line))
    {
        if (!flg)
        {
            if (line == "date | value")
                ;
            else
                throw "Header line is missing\n";
            flg = 1;
            continue ;
        }
        try
        {
            parse_input(line);
        }
        catch(const char * e)
        {
            std::cerr << e << " => " << line << std::endl;
        }
    }
    fin.close();
}

void    BitcoinExchange::saveData()
{
    std::ifstream fin("data.csv");
    std::string line;
    int         flg = 0;

    while (getline(fin, line))
    {
        if (!flg)
        {
            flg = 1;
            continue ;
        }
        data[line.substr(0, 10)] = std::atof((line.substr(11, line.length() - 11)).c_str());
    }
}
