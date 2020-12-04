/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 23:06:18 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:39:48 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure &s )
{
	setXP(s.getXP());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const &s )
{
	this->setXP(s.getXP());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cure const & )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Cure::clone() const
{
	AMateria *ret = new Cure(*this);
	return ret;
}

void Cure::use(ICharacter& target)
{
	this->AMateria::use(target);
	std::cout << "* heals " << target.getName() << "s wounds *\n";
}


/* ************************************************************************** */