/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:32:33 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/06 08:38:59 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
private:
	int					fixed_point;
	static const int	fractional_bits;	
public:
	Fixed(void);
	Fixed(const int vr);
	Fixed(const float fl);
	Fixed(const Fixed & rhs);
	Fixed & operator=(const Fixed & rhs);
	~Fixed();
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & os, const Fixed & item);

#endif
