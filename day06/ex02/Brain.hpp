/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:02:25 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 12:37:09 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>
#include<new>

class Brain
{
private:
        std::string ideas[100];

public:
        Brain(void);
        Brain(const Brain & rhs);
        Brain & operator=(const Brain & rhs);
        virtual ~Brain(void);
        Brain *clone();
};

#endif