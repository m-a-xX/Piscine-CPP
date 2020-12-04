/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:32:54 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:17:59 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon()
{
	name = "(null)";
	damage = -1;
	cost = -1;
}

AWeapon::AWeapon(std::string const & a_name, int a_damage, int a_cost)
{
	name = a_name;
	damage = a_damage;
	cost = a_cost;
}

AWeapon::AWeapon( const AWeapon & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	AWeapon &w = (AWeapon &)rhs;
	name = w.name;
	cost = w.cost;
	damage = w.damage;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AWeapon const & i )
{
	o << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void AWeapon::setName(std::string a_name)
{
	name = a_name;
}

void AWeapon::setAPCost(int a_cost)
{
	cost = a_cost;
}

void AWeapon::setDamage(int a_damage)
{
	damage = a_damage;
}

std::string AWeapon::getName() const
{
	return name;
}

int AWeapon::getAPCost() const
{
	return cost;
}

int AWeapon::getDamage() const
{
	return damage;
}



/* ************************************************************************** */