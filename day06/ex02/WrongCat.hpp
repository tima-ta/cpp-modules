/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:26:02 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/21 09:36:38 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
        WrongCat(void);
        WrongCat(const WrongCat & rhs);
        WrongCat & operator=(const WrongCat & rhs);
        ~WrongCat(void);
        void    makeSound(void) const;
};

#endif
