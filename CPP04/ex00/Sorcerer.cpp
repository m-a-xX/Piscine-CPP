/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:14:52 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:13:20 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer(std::string a_name, std::string a_title)
{
	name = a_name;
	title = a_title;
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	name = rhs.name;
	title = rhs.title;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	Sorcerer &sor = (Sorcerer &)i;
	o << "I am " << sor.getName() << ", " << sor.getTitle() << ", and i like ponies!\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Sorcerer::getName()
{
	return name;
}

std::string Sorcerer::getTitle()
{
	return title;
}

void	Sorcerer::introduce()
{
	std::cout << "I am " << name << ", " << title << ", and i like ponies!\n";	
}

void	Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}


/* ************************************************************************** */