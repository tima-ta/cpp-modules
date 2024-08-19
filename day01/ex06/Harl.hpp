/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:29:39 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/17 11:30:21 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include<iostream>
#include<string>

class Harl
{
private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
public:
    Harl( void );
    ~Harl( void );
    void complain( std::string level );
};

#endif
