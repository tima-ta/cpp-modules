/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:15 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:21:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat: Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat & rhs) : Animal(rhs)
{
    std::cout << "Cat: Copy Constructor Called" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs)
{
    std::cout << "Cat: Copy assignment Operator Called" << std::endl;
    if (this != &rhs)
        Animal::operator=(rhs);
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat:: Destructor Called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meaowww" << std::endl;
}