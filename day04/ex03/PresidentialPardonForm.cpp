/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:03:32 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 13:03:39 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential", 25, 5) , target("")
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string tar) : AForm("Presidential", 25, 5) , target(tar)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & rhs) : AForm(rhs) , target(rhs.target)
{
    
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
        target = rhs.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned())
        throw FormNotSigned();
    if (executor.getGrade() > getGradeExec())
        throw GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
