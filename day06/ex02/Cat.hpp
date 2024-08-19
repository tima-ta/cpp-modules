/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:18 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/21 11:13:46 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"

class Cat : public Animal
{
private:
        Brain*  att;

public:
        Cat(void);
        Cat(const Cat & rhs);
        Cat & operator=(const Cat & rhs);
        ~Cat(void);
        void    makeSound(void) const;
};

#endif