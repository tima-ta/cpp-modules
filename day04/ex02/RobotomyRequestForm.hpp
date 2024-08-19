/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:03:40 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/10 10:21:35 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include"AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
        std::string target;

public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string tar);
        RobotomyRequestForm(const RobotomyRequestForm & rhs);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);
        ~RobotomyRequestForm();

        void    execute(Bureaucrat const & executor) const;
};

#endif