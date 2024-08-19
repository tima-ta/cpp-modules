/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:15 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:29:04 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat: Default Constructor Called" << std::endl;
    att = new Brain;
}

Cat::Cat(const Cat & rhs) : Animal(rhs)
{
    std::cout << "Cat: Copy Constructor Called" << std::endl;
    if (rhs.att)
        att = rhs.att->clone();
}

Cat & Cat::operator=(const Cat & rhs)
{
    std::cout << "Cat: Copy Assignment Operator Called" << std::endl;
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

Cat::~Cat(void)
{
    std::cout << "Cat:: Destructor Called" << std::endl;
    delete att;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meaowww" << std::endl;
}