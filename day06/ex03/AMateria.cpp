/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:14:52 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 10:21:36 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : Type(type)
{
    std::cout << "AMateria: Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &rhs)
{
    std::cout << "AMateria: Copy constructor called" << std::endl;
    *this = rhs;
}

AMateria & AMateria::operator=(const AMateria & rhs)
{
    (void) rhs;
    std::cout << "AMateria: Copy assignment called" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria: Destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (Type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout << "AMateria: use function called" << std::endl;
}
