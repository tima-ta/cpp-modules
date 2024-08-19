/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:23 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/20 13:04:52 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

class Dog : public Animal
{
public:
        Dog(void);
        Dog(const Dog & rhs);
        Dog & operator=(const Dog & rhs);
        ~Dog(void);
        void    makeSound(void) const;
};

#endif