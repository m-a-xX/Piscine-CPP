/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:34:02 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/25 14:12:20 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed( const Fixed & src )
{
	value = src.getRawBits();
}

Fixed::Fixed( int number )
{
	value = number * (int)(1<<bits);
}

Fixed::Fixed( float number )
{
	value = number * (float)(1<<bits);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	this->value = rhs.getRawBits();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << ((float)i.value / (float)(1<<i.bits));
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits(void) const
{
	return value;
}

float Fixed::toFloat(void) const
{
	return ((float)value / (float)(1<<bits));
}

int Fixed::toInt(void) const
{
	return ((int)value / (int)(1<<bits));
}

/* ************************************************************************** */