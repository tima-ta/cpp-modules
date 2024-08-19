/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:14:49 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/07 08:51:51 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"PhoneBook.hpp"

PhoneBook::PhoneBook(int var1, int var2) : max_contc(var1), lim(var2)
{

}

PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::check_cmd(int& incre)
{
	if (input_string.empty())
		std::cerr << "Input is empty, try again..." <<  std::endl;
	else if (input_string == "ADD")
		_add_(incre);
	else if (input_string == "SEARCH")
		_search_();
	else if (input_string == "EXIT")
		_exit_();
	else
		not_valid();
}

void	PhoneBook::exit_d(void)
{
	std::cout << "EXIT\n";
	exit(0);			
}

static	std::string read_input(std::string input)
{
	std::string save;
	std::cout << input;
	if (std::getline(std::cin, save))
	{
		while (save.empty())
		{
			std::cout << "Input is input, try again..." << std::endl;
			std::cout << input;
			if (std::getline(std::cin, save))
				;
			else
				break ;
		}
		if (!save.empty())
			return (save);
	}
	std::cout << "EXIT\n";
	exit(0);
}

void	PhoneBook::_add_(int& incre)
{
	contacts[incre].i = incre; 
	contacts[incre].set_first_name(read_input("First Name: "));
	contacts[incre].set_last_name(read_input("Last Name: "));
	contacts[incre].set_nickname(read_input("Nickname: "));
	contacts[incre].set_phone_number(read_input("Phone Number: "));
	contacts[incre].set_darkest_secret(read_input("Darkest Secret: "));
	if (lim < max_contc)
		lim++;
	incre = (incre + 1) % max_contc;
}

static void	draw_line(void)
{
	std::cout << std::setfill('-') << std::setw(46) << ' ' << std::setfill(' ') << std::endl;
}

static void	display_header(void)
{
	draw_line();
	std::cout << '|' << std::setw(6) << 'i' << "ndex";
	std::cout << '|' << "first name";
	std::cout << '|' << std::setw(2) << 'l' << "ast name";
	std::cout << '|' << std::setw(3) << 'n' << "ickname";
	std::cout << '|' << std::endl;
	draw_line();
}

static void	new_string(std::string s)
{
	int len;

	len = 0;
	std::cout << '|';
	if (s.length() == 10)
		std::cout << s;
	else if (s.length() > 10)
		std::cout << s.substr(0, 9) << '.';
	else
	{
		len = 10 - s.length();
		std::cout << std::setw(len) << ' ' << s;
	}
}

void	PhoneBook::display_contact_content(void)
{
	for (int i = 0; i < lim; i++)
	{
		std::cout << '|' << std::setw(10) << i + 1;
		new_string(contacts[i].get_first_name());
		new_string(contacts[i].get_last_name());
		new_string(contacts[i].get_nickname());
		std::cout << '|' << std::endl;
		draw_line();
	}
}	

static	int	check_input(char *str, int lim)
{
	int	ret;
	char	*trav;

	trav = str;
	while (*trav)
	{
		if (!(*trav > '0' && *trav <= '9'))
			return (-1);
		trav++;
	}
	ret = atoi(str);
	if (ret - 1 >= lim)
		return (-1);
	return (ret);
}

void	PhoneBook::display_contact_i(void)
{
	std::string 	str;
	int		i;

	std::cout << std::setw(5) << ' ';
	std::cout << "Enter contact's index: ";
	if (std::getline(std::cin, str))
		;
	else
		exit_d();
    if (str.empty())
        return ;
	i = check_input((char *)str.c_str(), lim);
	if (i < 0)
	{
        std::cerr << "Invalid Index..." << std::endl;
        return ;
    }
	std::cout << std::setw(8) << ' ';
	std::cout << "First name: " << contacts[i - 1].get_first_name() << std::endl;
	std::cout << std::setw(8) << ' ';
	std::cout << "Last Name: " << contacts[i - 1].get_last_name() << std::endl;
	std::cout << std::setw(8) << ' ';
	std::cout << "Nickname: " << contacts[i - 1].get_nickname() << std::endl;
	std::cout << std::setw(8) << ' ';
	std::cout << "Phone Number: " << contacts[i - 1].get_phone_number() << std::endl;
	std::cout << std::setw(8) << ' ';
	std::cout << "Darkest Secret: " << contacts[i - 1].get_darkest_secret() << std::endl;
}

void	PhoneBook::_search_(void)
{
	display_header();
	display_contact_content();
	display_contact_i();
}

void	PhoneBook::_exit_(void)
{
	std::cout << "EXIT" << std::endl;
	exit(1);
}

void	PhoneBook::not_valid(void)
{
	std::cerr << "Invalid command, try again..." << std::endl;
}
