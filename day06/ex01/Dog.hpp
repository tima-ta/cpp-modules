/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:23 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/21 11:13:25 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

class Dog : public Animal
{
private:
        Brain*  att;

public:
        Dog(void);
        Dog(const Dog & rhs);
        Dog & operator=(const Dog & rhs);
        ~Dog(void);
        void    makeSound(void) const;
};

#endif