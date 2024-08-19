/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:14:28 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/04 09:39:49 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"

Contact::Contact(void) : i(0)
{

}

Contact::~Contact(void)
{

}

void	Contact::set_first_name(std::string fn)
{
	first_name = fn;
	fn.clear();
}

void	Contact::set_last_name(std::string ln)
{
	last_name = ln;
	ln.clear();
}

void	Contact::set_nickname(std::string nm)
{
	nickname = nm;
	nm.clear();
}

void	Contact::set_phone_number(std::string pn)
{
	phone_number = pn;
	pn.clear();
}

void	Contact::set_darkest_secret(std::string ds)
{
	darkest_secret = ds;
	ds.clear();
}

std::string	Contact::get_first_name(void)
{
	return (first_name);
}

std::string	Contact::get_last_name(void)
{
	return (last_name);
}

std::string	Contact::get_nickname(void)
{
	return (nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (darkest_secret);
}
