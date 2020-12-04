/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:14:52 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 17:14:52 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon(std::string a_name) : Victim(a_name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon( const Peon & src )
{
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=( Peon const & rhs )
{
    Peon &p = (Peon &)rhs;
	setName(p.getName());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Peon const & i )
{
	Peon &p = (Peon &)i;
	o << "I'm " << p.getName() << " and I like otters!\n";	
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Peon::getPolymorphed() const
{
    Peon &p = (Peon &)*this;
	std::cout << p.getName() << " was just polymorphed into a pink pony!\n";	
}


/* ************************************************************************** */