/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:14:52 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 17:14:52 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim()
{
	name = "Victim";
	std::cout << "A random victim called " << name << " just appeared!\n";
}

Victim::Victim(std::string a_name)
{
	name = a_name;
	std::cout << "A random victim called " << name << " just appeared!\n";
}

Victim::Victim( const Victim & src )
{
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "The victim " << name << " died for no apparent reasons!\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=( Victim const & rhs )
{
	name = rhs.name;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	Victim &v = (Victim &)i;
	o << "I'm " << v.getName() << " and I like otters!\n";	
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Victim::setName(std::string a_name)
{
	name = a_name;
}

std::string Victim::getName()
{
	return name;
}

void	Victim::introduce()
{
	std::cout << "I'm " << name << " and I like otters!\n";	
}

void	Victim::getPolymorphed() const
{
	std::cout<< name << " was just polymorphed in a cute little sheep!\n";	
}


/* ************************************************************************** */