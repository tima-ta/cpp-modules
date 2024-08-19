/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:14:36 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/04 09:37:02 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include<string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	int		i;
	Contact();
	~Contact();
	void		set_first_name(std::string fn);
	void		set_last_name(std::string ln);
	void		set_nickname(std::string nm);
	void		set_phone_number(std::string pn);
	void		set_darkest_secret(std::string ds);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone_number(void);
	std::string	get_darkest_secret(void);
};

# endif
