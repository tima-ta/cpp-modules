/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:55 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/11 09:04:18 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include<exception>

class Bureaucrat
{
private:
        const std::string   Name;
        int                 Grade;

public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat & rhs);
        Bureaucrat & operator=(const Bureaucrat & rhs);
        ~Bureaucrat();

        std::string     getName() const;
        int             getGrade() const;

        void            incre();
        void            decre();

        class GradeTooHighException : public std::exception 
        {
        public:
               const char* what() const throw() { return "Too high"; } 
        };
        class GradeTooLowException : public std::exception 
        {
        public:
               const char* what() const throw() { return "Too low"; } 
        };      
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & rhs);

#endif