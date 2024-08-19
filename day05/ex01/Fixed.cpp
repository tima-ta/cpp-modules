/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:32:46 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/08 10:07:06 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int vr) : fixed_point(vr << fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;	
}

Fixed::Fixed(const float fl) : fixed_point(roundf(fl * (1 << fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & rhs) : fixed_point(rhs.fixed_point)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		setRawBits(rhs.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
