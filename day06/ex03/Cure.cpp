/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:39:56 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 12:58:32 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(const Cure & rhs) : AMateria(rhs)
{
    std::cout << "Cure: Copy contructor called" << std::endl;
}

Cure & Cure::operator=(const Cure & rhs)
{
    std::cout << "Cure: Copy assignment operator called" << std::endl;
    if (this != &rhs)
        AMateria::operator=(rhs);
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure: Destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria * ret = new Cure();

    return (ret);
}

void Cure::use(ICharacter& target)
{
    std::cout << "------------------------------" << std::endl;
    std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
    std::cout << "------------------------------" << std::endl;
}
