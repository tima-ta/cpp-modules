/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:45:24 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 10:29:59 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include"IMateriaSource.hpp"
#include"AMateria.hpp"
#include<iostream>

class MateriaSource : public IMateriaSource
{
private:
        AMateria *mtrs[4];

public:
        MateriaSource();
        MateriaSource(const MateriaSource & rhs);
        MateriaSource & operator=(const MateriaSource & rhs);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif