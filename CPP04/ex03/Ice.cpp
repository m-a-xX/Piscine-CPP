/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 23:06:12 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:39:24 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice &s )
{
	setXP(s.getXP());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const &s )
{
	this->setXP(s.getXP());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Ice const & )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Ice::clone() const
{
	AMateria *ret = new Ice(*this);
	return ret;
}

void Ice::use(ICharacter& target)
{
	this->AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}


/* ************************************************************************** */