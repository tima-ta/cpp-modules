/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:57 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 12:59:09 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat obj("Eva", 2);
    ShrubberyCreationForm o1("Ema");
    RobotomyRequestForm o2("Elsa");
    PresidentialPardonForm o3("Era");

    try
    {
        o1.beSigned(obj);
        o1.execute(obj);    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        o2.beSigned(obj);
        o2.execute(obj);    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        o3.beSigned(obj);
        o3.execute(obj);    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}