/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:25:56 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/21 10:08:23 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal
{
protected:
        std::string type;

public:
        WrongAnimal(void);
        WrongAnimal(std::string set);
        WrongAnimal(const WrongAnimal & rhs);
        WrongAnimal & operator=(const WrongAnimal & rhs);
        virtual ~WrongAnimal(void);
        std::string     getType(void) const;
        void    makeSound(void) const;
};

#endif