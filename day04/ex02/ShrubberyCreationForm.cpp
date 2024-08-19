/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:03:43 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 12:58:35 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137) , target("")
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tar) : AForm("Shrubbery", 145, 137) , target(tar)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & rhs) : AForm(rhs) , target(rhs.target)
{
    
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
        target = rhs.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string     file;
    std::ofstream   fout;

    if (!getIsSigned())
        throw FormNotSigned();
    if (executor.getGrade() > getGradeExec())
        throw GradeTooLowException();
    file = target + "_shrubbery";
    fout.open(file.c_str());
    if (!fout.is_open())
    {
       std::cerr << "Cannot open file" << std::endl;
       exit(EXIT_FAILURE);
    }
    fout << "               ,@@@@@@@," << std::endl;
    fout << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    fout << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    fout << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    fout << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    fout << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    fout << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    fout << "       |o|        | |         | |" << std::endl;
    fout << "       |.|        | |         | |" << std::endl;
    fout << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";
    fout.close();
}
