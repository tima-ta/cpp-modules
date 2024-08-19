/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:21 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:21:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog: Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog & rhs) : Animal(rhs)
{
    std::cout << "Dog: Copy Constructor Called" << std::endl;
}

Dog & Dog::operator=(const Dog & rhs)
{
    std::cout << "Dog: Copy assignment Operator Called" << std::endl;
    if (this != &rhs)
        Animal::operator=(rhs);
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog:: Destructor Called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}