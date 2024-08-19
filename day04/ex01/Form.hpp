/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:26:11 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 09:16:41 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include"Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
        const std::string   FName;
        bool                Is;
        const int           GradeSign;
        const int           GradeExec;

public:
        Form();
        Form(const std::string name, const int first, const int second);
        Form(const Form & rhs);
        Form & operator=(const Form & rhs);
        ~Form();
        
        std::string getName() const;
        int         getGradeSign() const;
        int         getGradeExec() const;
        bool        getIsSigned() const;

        void        beSigned(Bureaucrat & inst);

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

std::ostream & operator<<(std::ostream & os, const Form & rhs);

#endif