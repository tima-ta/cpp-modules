/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:27:14 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 10:37:30 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include"AMateria.hpp"

class Ice : public AMateria
{
public:
        Ice();
        Ice(const Ice & rhs);
        Ice & operator=(const Ice & rhs);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif