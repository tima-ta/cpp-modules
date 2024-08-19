/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:34:31 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/06 08:41:44 by fraqioui         ###   ########.fr       */
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
	int 				getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
	bool				operator>(const Fixed & oper);
	bool				operator<(const Fixed & oper);		
	bool				operator>=(const Fixed & oper);	
	bool				operator<=(const Fixed & oper);	
	bool				operator==(const Fixed & oper);	
	bool				operator!=(const Fixed & oper);	
	Fixed				operator-(const Fixed & oper);
	Fixed				operator+(const Fixed & oper);
	Fixed				operator*(const Fixed & oper);
	Fixed				operator/(const Fixed & oper);
	Fixed&				operator++(void);
	Fixed				operator++(int);
	Fixed&				operator--(void);
	Fixed				operator--(int);
	static Fixed&		min(Fixed & operA, Fixed & operB);
	const static Fixed&	min(const Fixed & operA, const Fixed & operB);
	static Fixed&		max(Fixed & operA, Fixed & operB);
	const static Fixed&	max(const Fixed & operA, const Fixed & operB);
};

std::ostream & operator<<(std::ostream & os, const Fixed & item);

#endif