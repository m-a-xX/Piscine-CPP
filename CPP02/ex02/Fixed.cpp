/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:34:02 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/25 16:56:57 by mavileo          ###   ########.fr       */
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

bool	Fixed::operator<( Fixed const &number )
{
	if (this->toFloat() < number.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>( Fixed const &number )
{
	if (this->toFloat() > number.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>=( Fixed const &number )
{
	if (this->toFloat() >= number.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<=( Fixed const &number )
{
	if (this->toFloat() <= number.toFloat())
		return true;
	return false;
}

bool	Fixed::operator==( Fixed const &number )
{
	if (this->toFloat() == number.toFloat())
		return true;
	return false;
}

bool	Fixed::operator!=( Fixed const &number )
{
	if (this->toFloat() != number.toFloat())
		return true;
	return false;
}

Fixed	Fixed::operator+( Fixed const &number )
{
	return this->toFloat() + number.toFloat();
}

Fixed	Fixed::operator-( Fixed const &number )
{
	return this->toFloat() - number.toFloat();
}

Fixed	Fixed::operator*( Fixed const &number )
{
	return this->toFloat() * number.toFloat();
}

Fixed	Fixed::operator/( Fixed const &number )
{
	if (number.toFloat() == 0)
		return (0);
	return this->toFloat() / number.toFloat();
}

Fixed	Fixed::operator++( int n )
{
	Fixed tmp(*this);
	(void)n;
	value = ++value;
	return tmp;
}

Fixed	Fixed::operator++()
{
	Fixed tmp;
	tmp.value = ++value;
	return tmp;
}

Fixed	Fixed::operator--( int n )
{
	Fixed tmp(*this);
	(void)n;
	value = --value;
	return tmp;
}

Fixed	Fixed::operator--()
{
	Fixed tmp;
	tmp.value = --value;
	return tmp;
}

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

Fixed & Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if ((Fixed &)f1 < (Fixed &)f2)
		return (Fixed &)f1;
	return (Fixed &)f2;
}

Fixed & Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if ((Fixed &)f1 > (Fixed &)f2)
		return (Fixed &)f1;
	return (Fixed &)f2;
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

Fixed &min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed &max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}
