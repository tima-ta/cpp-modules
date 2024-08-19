/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:03:37 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 13:23:49 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib> 
#include <time.h> 

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45) , target("")
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string tar) : AForm("Robotomy", 72, 45) , target(tar)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rhs) : AForm(rhs) , target(rhs.target)
{
    
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
        target = rhs.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned())
        throw FormNotSigned();
    if (executor.getGrade() > getGradeExec())
        throw GradeTooLowException();

    srand(time(0));
    if (rand() % 2)
        std::cout << target << " has been robotomized." << std::endl;
    else
        std::cout << target << " failed to robotpmized." << std::endl;
}
