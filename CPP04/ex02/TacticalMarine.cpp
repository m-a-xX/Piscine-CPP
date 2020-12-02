/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:56:06 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/02 14:39:27 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action !\n";
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ...\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & )
{
	return *this;
}

std::ostream &			operator<<( std::ostream & o, TacticalMarine const & )
{
	o << "Tactical Marine ready for action !\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine *ret = new TacticalMarine(*this);
	return (ISpaceMarine*)ret;
	
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !\n";
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
}


/* ************************************************************************** */