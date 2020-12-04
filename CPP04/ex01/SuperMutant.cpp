/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:45:37 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 23:33:18 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !\n";
}

SuperMutant::SuperMutant( const SuperMutant & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ...\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	setHP(rhs.getHP());
	setType(rhs.getType());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, SuperMutant const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (getHP() < 0)
		return ;
	if (getHP() - damage < 0)
		setHP(0);
	else
		setHP(getHP() - damage);
}

/* ************************************************************************** */