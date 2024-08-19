/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:14:13 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/06 08:37:17 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed & rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(rhs.getRawBits());
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
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}
