/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:14:52 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/05 14:18:40 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include<iostream>
# include<iomanip>
# include<cstdlib>
# include"Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];

public:
	const int	max_contc;
	int		    lim;
	PhoneBook(int var1, int var2);
	~PhoneBook();
	std::string input_string;
	void	check_cmd(int& incre);
	void	_add_(int& incre);
	void	_search_(void);
	void	display_contact_content(void);
	void	display_contact_i(void);
	void	_exit_(void);
	void	exit_d(void);
	void	not_valid(void);
};

# endif
