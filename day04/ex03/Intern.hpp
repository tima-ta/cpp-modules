/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:25:19 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 16:24:12 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include"AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

class Intern
{
public:
        Intern();
        Intern(const Intern & rhs);
        Intern & operator=(const Intern & rhs);
        ~Intern();

        AForm*    makeForm(std::string name, std::string target);
};

#endif