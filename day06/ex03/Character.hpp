/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:06 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 11:03:25 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"ICharacter.hpp"
#include"AMateria.hpp"
#include<string>

class Character : public ICharacter
{
private:
        std::string       name;
        AMateria                *slot[4];
        AMateria                *save[4];

public:
        Character(void);
        Character(const std::string Name);
        Character(const Character & rhs);
        Character & operator=(const Character & rhs);
        ~Character(void);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
