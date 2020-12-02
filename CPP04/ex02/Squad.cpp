/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:55:59 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/02 14:48:01 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
{
	count = 0;
	units = NULL;
}

Squad::Squad( const Squad & src )
{
	if (units)
		delete units;
	count = src.count;
	units = src.units;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	for (int i = 0; i < count; i++)
		delete (TacticalMarine*)&units[i];
	delete units;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	count = rhs.count;
	units = rhs.units;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Squad const & i )
{
	o << "Squad have " << i.getCount() << " units\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Squad::getCount() const
{
	return count;
}

ISpaceMarine* Squad::getUnit(int n) const
{
	ISpaceMarine* tmp = units;
	for (int i = 0; i < n; i++)
		tmp++;
	return tmp;
}

int Squad::push(ISpaceMarine *newUnit)
{
	void *p;
	if (newUnit == NULL)
		return (1);
	if (units == NULL)
	{
		count = 1;
		units = newUnit;
		return 0;
	}
	for (int i = 0; i < count; i++)
	{
		p = &units[i];
		if (p == (void *)newUnit)
			return 1;
	}
	ISpaceMarine *f = (ISpaceMarine *)(new TacticalMarine[count + 1]);
	for (int j = 0; j < count; j++)
		f[j] = units[j];
	f[count] = *newUnit;
	count++;
	delete units;
	units = f;
	return 0;
}



/* ************************************************************************** */