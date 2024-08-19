/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:02:22 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:20:26 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain: Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain & rhs)
{
    std::cout << "Brain: Copy Constructor Called" << std::endl;
    std::copy(rhs.ideas, rhs.ideas + 100, ideas);
}

Brain & Brain::operator=(const Brain & rhs)
{
    std::cout << "Brain: Copy Assignment Operator Called" << std::endl;
    if (this != &rhs)
        std::copy(rhs.ideas, rhs.ideas + 100, ideas);
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain:: Destructor Called" << std::endl;
}

Brain *Brain::clone()
{
    return (new Brain);
}
