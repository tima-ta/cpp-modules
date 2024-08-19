/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:28:22 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:21:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal: Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string set) : type(set)
{
    std::cout << "WrongAnimal: Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & rhs)
{
    std::cout << "WrongAnimal: Copy Constructor Called" << std::endl;
    type = rhs.type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & rhs)
{
    std::cout << "WrongAnimal: Copy assignment Operator Called" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal:: Destructor Called" << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}
