/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:52 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/11 10:30:44 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("") , Grade(1)
{
    
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : Name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs) : Name(rhs.Name) , Grade(rhs.Grade)
{
    
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
    if (this != &rhs)
        Grade = rhs.Grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    
}

std::string Bureaucrat::getName() const
{
    return Name;
}

int Bureaucrat::getGrade() const
{
    return Grade;
}

void Bureaucrat::incre()
{
    int check = Grade - 1;

    if (check < 1)
        throw GradeTooHighException();
    Grade--;
}

void Bureaucrat::decre()
{
    int check = Grade + 1;

    if (check > 150)
        throw GradeTooLowException();
    Grade++;
}

void    Bureaucrat::signForm(AForm & inst)
{
    try
    {
        inst.beSigned(*this);
        std::cout << Name << " signed " << inst.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << Name << " couldn't sign " << inst.getName() << " because grade is " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << Name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs)
{
    std::cout << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade() << std::endl;

    return os;
}
