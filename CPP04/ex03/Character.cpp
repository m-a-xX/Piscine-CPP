/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 23:06:22 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/03 09:59:48 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
}

Character::Character(std::string a_name)
{
	name = a_name;
	mats[0] = NULL;
	mats[1] = NULL;
	mats[2] = NULL;
	mats[3] = NULL;
}

Character::Character( const Character & src )
{
	name = src.name;
	mats[0] = src.mats[0];
	mats[1] = src.mats[1];
	mats[2] = src.mats[2];
	mats[3] = src.mats[3];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	if (mats[0])
		delete mats[0];
	if (mats[1])
		delete mats[1];
	if (mats[2])
		delete mats[2];
	if (mats[3])
		delete mats[3];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	name = rhs.name;
	mats[0] = rhs.mats[0];
	mats[1] = rhs.mats[1];
	mats[2] = rhs.mats[2];
	mats[3] = rhs.mats[3];
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	if (m == NULL)
		return ;
	while (mats[i] != NULL)
		i++;
	if (i == 4)
		return ;
	mats[i] = m;
}

void Character::unequip(int idx)
{
	if (idx << 4 && idx > -1)
		mats[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0 || !mats[idx])
		return ;
	mats[idx]->use(target);
}



/* ************************************************************************** */