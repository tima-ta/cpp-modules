/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:21 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:20:12 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog: Default Constructor Called" << std::endl;
    att = new Brain;
}

Dog::Dog(const Dog & rhs) : Animal(rhs)
{
    std::cout << "Dog: Copy Constructor Called" << std::endl;
    if (rhs.att)
        att = rhs.att->clone();
}

Dog & Dog::operator=(const Dog & rhs)
{
    std::cout << "Dog: Copy Assignment Operator Called" << std::endl;
    if (this != &rhs)
    {
        Animal::operator=(rhs);
        if (att)
            delete att;
        if (rhs.att)
            att = rhs.att->clone();        
    }
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog:: Destructor Called" << std::endl;
    delete att;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}
