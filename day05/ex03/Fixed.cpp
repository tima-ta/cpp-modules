/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:35:37 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/06 10:55:32 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed() : fixed_point(0)
{

}

Fixed::Fixed(const int vr) : fixed_point(vr << fractional_bits)
{

}

Fixed::Fixed(const float fl) : fixed_point(roundf( fl * (1 << fractional_bits)))
{

}

Fixed::Fixed(const Fixed & rhs) : fixed_point(rhs.fixed_point)
{

}

Fixed & Fixed::operator=(const Fixed & rhs)
{
	if (this != &rhs)
		setRawBits(rhs.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{

}

int	Fixed::getRawBits(void) const
{
	return (fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(getRawBits()) / (1 << fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (getRawBits() >> fractional_bits);
}

std::ostream & operator<<(std::ostream & os, const Fixed & item)
{
	os << item.toFloat();

	return (os);
}

bool	Fixed::operator>(const Fixed & oper)
{
	return (getRawBits() > oper.getRawBits());
}

bool	Fixed::operator<(const Fixed & oper)
{
	return (getRawBits() < oper.getRawBits());
}

bool	Fixed::operator>=(const Fixed & oper)
{
	return (getRawBits() >= oper.getRawBits());
}

bool	Fixed::operator<=(const Fixed & oper)
{
	return (getRawBits() <= oper.getRawBits());
}

bool	Fixed::operator==(const Fixed & oper)
{
	return (getRawBits() == oper.getRawBits());
}

bool	Fixed::operator!=(const Fixed & oper)
{
	return (getRawBits() != oper.getRawBits());
}

Fixed	Fixed::operator-(const Fixed & oper)
{
	Fixed save(toFloat() - oper.toFloat());
	return (save);
}

Fixed	Fixed::operator+(const Fixed & oper)
{
	Fixed save(toFloat() + oper.toFloat());
	return (save);
}

Fixed	Fixed::operator*(const Fixed & oper)
{
	Fixed save(toFloat() * oper.toFloat());
	return (save);
}

Fixed	Fixed::operator/(const Fixed & oper)
{
	Fixed save(toFloat() / oper.toFloat());
	return (save);
}

Fixed&	Fixed::operator++(void)
{
	++fixed_point;	
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed save(*this);
	++*this;
	return (save);
}

Fixed&	Fixed::operator--(void)
{
	--fixed_point;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed save(*this);
	--*this;
	return (save);
}

Fixed&	Fixed::min(Fixed & operA, Fixed & operB)
{
	if (operA.getRawBits() < operB.getRawBits())
		return (operA);
	return (operB);
}

const Fixed&	Fixed::min(const Fixed & operA, const Fixed & operB)
{
	if (operA.getRawBits() < operB.getRawBits())
		return (operA);
	return (operB);
}

Fixed&	Fixed::max(Fixed & operA, Fixed & operB)
{	
	if (operA.getRawBits() > operB.getRawBits())
		return (operA);
	return (operB);
}

const Fixed&	Fixed::max(const Fixed & operA, const Fixed & operB)
{
	if (operA.getRawBits() > operB.getRawBits())
		return (operA);
	return (operB);
}