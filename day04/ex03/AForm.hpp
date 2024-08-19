/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:26:11 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 16:42:24 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include"Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
        const std::string   FName;
        bool                Is;
        const int           GradeSign;
        const int           GradeExec;

public:
        AForm();
        AForm(const std::string name, const int first, const int second);
        AForm(const AForm & rhs);
        AForm & operator=(const AForm & rhs);
        virtual      ~AForm();

        std::string getName() const;
        int         getGradeSign() const;
        int         getGradeExec() const;
        bool        getIsSigned() const;

        void            beSigned(Bureaucrat & inst);
        virtual void    execute(Bureaucrat const & executor) const = 0;

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
        class FormNotSigned : public std::exception 
        {
        public:
               const char* what() const throw() { return "Form is not signed"; } 
        };
};

std::ostream & operator<<(std::ostream & os, const AForm & rhs);

#endif