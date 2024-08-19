/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:26:14 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 09:24:42 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : FName("") , Is(0) , GradeSign(1) , GradeExec(1)
{
    
}

AForm::AForm(const std::string name, const int first, const int second) : FName(name) , Is(0) , GradeSign(first) , GradeExec(second)
{
    if (GradeSign < 1 || GradeExec < 1)
        throw GradeTooHighException();
    if (GradeSign > 150 || GradeExec > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm & rhs) : FName(rhs.FName) , Is(rhs.Is) , GradeSign(rhs.GradeSign) , GradeExec(rhs.GradeExec)
{
    
}

AForm & AForm::operator=(const AForm & rhs)
{
    if (this != &rhs)
        Is = rhs.Is;
    return (*this);
}

AForm::~AForm()
{
    
}

std::string AForm::getName() const
{
    return (FName);
}

int AForm::getGradeSign() const
{
    return GradeSign;
}

int AForm::getGradeExec() const
{
    return GradeExec;
}

bool    AForm::getIsSigned() const
{
    return Is;
}

void    AForm::beSigned(Bureaucrat & inst)
{
    if (inst.getGrade() < GradeSign)
    {
        Is = true;
        return ;
    }
    throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & os, const AForm & rhs)
{
    os << rhs.getName() << " infos: " << std::endl;
    os << "Sign: " << rhs.getIsSigned() << std::endl;
    os << "Grade to sign: " << rhs.getGradeSign() << std::endl;
    os << "Grade to execute: " << rhs.getGradeExec() << std::endl;

    return os;
}
