/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:36:52 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/25 17:46:56 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<iostream>
#include<string>
#include<fstream>
#include<map>

class BitcoinExchange
{
private:
        std::map<std::string, float> data;

        BitcoinExchange(const BitcoinExchange & rhs);
        BitcoinExchange & operator=(const BitcoinExchange & rhs);

public:
        BitcoinExchange();
        ~BitcoinExchange();
        
        void    saveData();
        void    exchangeData(std::string file);
        void    exgExec(std::string date, float & value);
        void    parse_input(std::string & line);
};

#endif