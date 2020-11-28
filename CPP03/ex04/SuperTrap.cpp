/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:17 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 01:25:56 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperTrap::SuperTrap()
{
	std::cout << "SuperTrap Default constructor called\n";
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 120;
	maxEnergyPoints = 120;
	name = "Super";
	meleeDamage = 60;
	rangedDamage = 30;
	armor = 5;
}

SuperTrap::SuperTrap(std::string input)
{
	std::cout << "SuperTrap Default constructor called\n";
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 120;
	maxEnergyPoints = 120;
	name = input;
	meleeDamage = 60;
	rangedDamage = 30;
	armor = 5;
}

SuperTrap::SuperTrap( const SuperTrap & src )
{
	std::cout << "SuperTrap Copy constructor called\n";
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Destructor called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperTrap &				SuperTrap::operator=( SuperTrap const & rhs )
{
	std::cout << "SuperTrap Assignation operator called\n";
	hitPoints = rhs.hitPoints;
	maxHitPoints = rhs.maxHitPoints;
	energyPoints = rhs.energyPoints;
	maxEnergyPoints = rhs.maxEnergyPoints;
	name = rhs.name;
	meleeDamage = rhs.meleeDamage;
	rangedDamage = rhs.rangedDamage;
	armor = rhs.armor;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/* ************************************************************************** */