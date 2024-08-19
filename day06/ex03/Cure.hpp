/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:39:16 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 10:37:32 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include"AMateria.hpp"

class Cure : public AMateria
{
public:
        Cure();
        Cure(const Cure & rhs);
        Cure & operator=(const Cure & rhs);
        ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif