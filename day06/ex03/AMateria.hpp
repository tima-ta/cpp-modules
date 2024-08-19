/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:13:40 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 11:03:14 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include"ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
        const std::string Type;

public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria & rhs);
        AMateria & operator=(const AMateria & rhs);
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif