/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:14:18 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/06 08:36:55 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class Fixed
{
private:
	int					fixed_point;
	static const int	fractional_bits;	
public:
	Fixed();
	Fixed(const Fixed & rhs);
	Fixed & operator=(const Fixed & rhs);
	~Fixed();
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
