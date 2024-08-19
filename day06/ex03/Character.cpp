/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:02 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 13:37:35 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character(void)
{
    int i = 0;

    std::cout << "Character: Default constructor called" << std::endl;
    while (i < 4)
        slot[i++] = NULL;
    i = 0;
    while (i < 4)
        save[i++] = NULL;
}

Character::Character(const std::string Name) : name(Name)
{
    int i = 0;

    std::cout << "Character: Constructor called" << std::endl;
    while (i < 4)
        slot[i++] = NULL;
    i = 0;
    while (i < 4)
        save[i++] = NULL;
    
}

Character::Character(const Character & rhs) : name(rhs.name)
{
    int i = 0;
    std::cout << "Character: Copy constrcutor called" << std::endl;
    while (i < 4)
    {
        if (rhs.slot[i])
            slot[i] = rhs.slot[i]->clone();
        i++;
    }
}

Character & Character::operator=(const Character & rhs)
{
    std::cout << "Character: Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        name = rhs.name;
        int i = 0;
        while (i < 4)
        {
            delete slot[i];
            if (rhs.slot[i])
                slot[i] = rhs.slot[i]->clone();
            i++;
        }
    }
    return (*this);
}

Character::~Character(void)
{
    int i = 0;
    std::cout << "Character: Destructor called" << std::endl;
    while (i < 4)
        delete slot[i++];
    i = 0;
    while (i < 4)
        delete save[i++];
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    int i = 0;
    while (slot[i] && i < 4)
        i++;
    if (i < 4)
        slot[i] = m;
}

void Character::unequip(int idx)
{
    save[idx] = slot[idx];
    slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (slot[idx] && idx >= 0 && idx < 4)
        slot[idx]->use(target);
}
