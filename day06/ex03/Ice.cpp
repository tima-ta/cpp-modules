/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:30:03 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 12:58:43 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(const Ice & rhs) : AMateria(rhs)
{
    std::cout << "Ice: Copy contructor called" << std::endl;
}

Ice & Ice::operator=(const Ice & rhs)
{
    std::cout << "Ice: Copy assignment operator called" << std::endl;
    if (this != &rhs)
        AMateria::operator=(rhs);
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice: Destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria * ret = new Ice();

    return (ret);
}

void Ice::use(ICharacter& target)
{
    std::cout << "------------------------------" << std::endl;
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
    std::cout << "------------------------------" << std::endl;
}
