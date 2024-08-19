/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:26:14 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 09:24:42 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : FName("") , Is(0) , GradeSign(1) , GradeExec(1)
{
    
}

Form::Form(const std::string name, const int first, const int second) : FName(name) , Is(0) , GradeSign(first) , GradeExec(second)
{
    if (GradeSign < 1 || GradeExec < 1)
        throw GradeTooHighException();
    if (GradeSign > 150 || GradeExec > 150)
        throw GradeTooLowException();
}

Form::Form(const Form & rhs) : FName(rhs.FName) , Is(rhs.Is) , GradeSign(rhs.GradeSign) , GradeExec(rhs.GradeExec)
{
    
}

Form & Form::operator=(const Form & rhs)
{
    if (this != &rhs)
        Is = rhs.Is;
    return (*this);
}

Form::~Form()
{
    
}

std::string Form::getName() const
{
    return (FName);
}

int Form::getGradeSign() const
{
    return GradeSign;
}

int Form::getGradeExec() const
{
    return GradeExec;
}

bool    Form::getIsSigned() const
{
    return Is;
}

void    Form::beSigned(Bureaucrat & inst)
{
    if (inst.getGrade() < GradeSign)
    {
        Is = true;
        return ;
    }
    throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & os, const Form & rhs)
{
    os << rhs.getName() << " infos: " << std::endl;
    os << "Sign: " << rhs.getIsSigned() << std::endl;
    os << "Grade to sign: " << rhs.getGradeSign() << std::endl;
    os << "Grade to execute: " << rhs.getGradeExec() << std::endl;

    return os;
}
