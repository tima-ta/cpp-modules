/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:08 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:21:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal: Default Constructor Called" << std::endl;
}

Animal::Animal(std::string set) : type(set)
{
    std::cout << "Animal: Constructor Called" << std::endl;
}

Animal::Animal(const Animal & rhs)
{
    std::cout << "Animal: Copy Constructor Called" << std::endl;
    type = rhs.type;
}

Animal & Animal::operator=(const Animal & rhs)
{
    std::cout << "Animal: Copy assignment Operator Called" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal:: Destructor Called" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "No sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}
