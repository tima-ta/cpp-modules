/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:03:34 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 10:22:27 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include"AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
        std::string target;

public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string tar);
        PresidentialPardonForm(const PresidentialPardonForm & rhs);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);
        ~PresidentialPardonForm();

        void    execute(Bureaucrat const & executor) const;
};

#endif