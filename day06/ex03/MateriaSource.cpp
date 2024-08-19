/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:50:19 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 13:36:50 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = -1;

    std::cout << "MateriaSource: Default constrcutor called" << std::endl;
    while (++i < 4)
        mtrs[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & rhs)
{
    int i = 0;

    std::cout << "MateriaSource: Copy constrcutor called" << std::endl;
    while (i < 4)
    {
        if(rhs.mtrs[i])
            mtrs[i] = rhs.mtrs[i]->clone();
        i++;
    }
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs)
{
    std::cout << "MateriaSource: Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        int i = 0;
        while (i < 4)
        {
            delete mtrs[i];
            if(rhs.mtrs[i])
                mtrs[i] = rhs.mtrs[i]->clone();
            i++;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource: Destructor called" << std::endl;
}

void    MateriaSource::learnMateria(AMateria* obj)
{
    int i = 0;

    while (mtrs[i] && i < 4)
        i++;
    if (i < 4)
        mtrs[i] = obj;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;

    while (i < 4)
    {
        if (mtrs[i] && mtrs[i]->getType() == type)
            return mtrs[i]->clone();
        i++;
    }
    return 0;
}
