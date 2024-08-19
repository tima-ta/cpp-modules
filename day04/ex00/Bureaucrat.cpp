/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:52 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/11 10:29:51 by fraqioui         ###   ########.fr       */
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

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs)
{
    std::cout << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade() << std::endl;

    return os;
}
