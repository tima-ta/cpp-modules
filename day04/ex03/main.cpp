/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:57 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 16:49:41 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Intern.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main(void)
{
    Intern obj;

    AForm *save = obj.makeForm("Robotomy", "Eva");
    if (save)
    {
        try
        {
            Bureaucrat keep("Eva", 1);
            save->beSigned(keep);
            save->execute(keep);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    delete save;
}