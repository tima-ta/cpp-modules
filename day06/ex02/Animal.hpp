/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:11 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:31:49 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include"Brain.hpp"

class Animal
{
protected:
        std::string type;

public:
        Animal(void);
        Animal(std::string set);
        Animal(const Animal & rhs);
        Animal & operator=(const Animal & rhs);
        virtual ~Animal(void);
        std::string     getType(void) const;
        virtual void    makeSound(void) const = 0;
};

#endif