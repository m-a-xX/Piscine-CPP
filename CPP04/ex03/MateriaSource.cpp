/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 23:06:29 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 11:30:39 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	mats = new AMateria*;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for(int i = 0; i < 4; i++)
	{
		if (src.mats[i] == NULL)
			mats[i] = NULL;
		else
			mats[i] = src.mats[i]->clone();
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	delete mats;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	delete mats;
	mats = rhs.mats;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (mats[i]->getType().compare(type))
		i++;
	if (i == 4)
		return 0;
	AMateria *ret;
	ret = mats[i];
	return ret;
}


/* ************************************************************************** */