/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:25:59 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:21:00 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat: Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & rhs) : WrongAnimal(rhs)
{
    std::cout << "WrongCat: Copy Constructor Called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & rhs)
{
    std::cout << "WrongCat: Copy assignment Operator Called" << std::endl;
    if (this != &rhs)
        WrongAnimal::operator=(rhs);
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat:: Destructor Called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong cat sound" << std::endl;
}
