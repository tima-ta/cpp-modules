/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:03:46 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 10:20:35 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include"AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
        std::string target;

public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string tar);
        ShrubberyCreationForm(const ShrubberyCreationForm & rhs);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
        ~ShrubberyCreationForm();

        void    execute(Bureaucrat const & executor) const;
};

#endif