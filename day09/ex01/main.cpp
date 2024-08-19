/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:14:41 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/05 14:18:44 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

int	phonebook(void)
{
	PhoneBook pb(8, 0);	
	int	i;
	i = 0;
	
	while (1)
	{
		std::cout << "Enter a valid command (ADD | SEARCH | EXIT): ";
		if (std::getline(std::cin, pb.input_string))
			pb.check_cmd(i);
		else
			pb.exit_d();
	}
	return (1);
}

int main(int ac, char **av)
{
	(void) av;
	if (ac == 1)
		phonebook();
	else
		std::cout << "Only one argument is required" << std::endl;
	return (1);
}
