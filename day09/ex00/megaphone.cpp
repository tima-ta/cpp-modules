/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:11:14 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/04 09:11:46 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

void	make_upper(char **s)
{
	while (*s)
	{
		while (**s)
		{
			std::cout << (char) toupper(**s);
			(*s)++;
		}
		s++;
	} 
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		make_upper(++av);
		std::cout << std::endl;
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (1);
}
