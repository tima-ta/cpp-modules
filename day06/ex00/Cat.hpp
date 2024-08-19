/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:18 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/20 13:05:02 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"

class Cat : public Animal
{
public:
        Cat(void);
        Cat(const Cat & rhs);
        Cat & operator=(const Cat & rhs);
        ~Cat(void);
        void    makeSound(void) const;
};

#endif