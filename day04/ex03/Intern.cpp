/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:25:21 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 16:49:24 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{
    
}

Intern::Intern(const Intern & rhs)
{
    *this = rhs;
}

Intern & Intern::operator=(const Intern & rhs)
{
    (void) rhs;
    return (*this);
}

Intern::~Intern()
{
    
}

AForm*    Intern::makeForm(std::string name, std::string target)
{
    AForm *arr[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };
    std::string Names[3] = {
        "Shrubbery",
        "Robotomy",
        "Presidential"
    };
    int k = 0;
    for ( ; k < 3; k++)
    {
        if (!Names[k].compare(name))
            break ;
    }
    for (int c = 0 ; c < 3; c++)
    {
        if (c == k)
            continue ;
        delete arr[c];
    }
    if (k < 3)
    {
        std::cout << "Intern creates " << name << std::endl;
        return arr[k];
    }
    std::cerr << "The passed form does not exist" << std::endl;
    return (NULL);
}
