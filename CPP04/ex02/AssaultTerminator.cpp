/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:56:06 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/02 14:39:48 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ...\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AssaultTerminator &				AssaultTerminator::operator=( AssaultTerminator const & )
{
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AssaultTerminator const & )
{
	o << "Tactical Marine ready for action !\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine* AssaultTerminator::clone() const
{
	AssaultTerminator *ret = new AssaultTerminator(*this);
	return (ISpaceMarine*)ret;
	
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !\n";
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *\n";
}


/* ************************************************************************** */