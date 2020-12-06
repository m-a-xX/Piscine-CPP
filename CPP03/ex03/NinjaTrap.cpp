/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:17 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 16:13:16 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap(std::string input)
{
	std::cout << "NinjaTrap Default constructor called\n";
	hitPoints = 60;
	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	name = input;
	meleeDamage = 60;
	rangedDamage = 5;
	armor = 0;
}

NinjaTrap::NinjaTrap( const NinjaTrap & src )
{
	std::cout << "NinjaTrap Copy constructor called\n";
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NinjaTrap &				NinjaTrap::operator=( NinjaTrap const & rhs )
{
	std::cout << "NinjaTrap Assignation operator called\n";
	hitPoints = rhs.hitPoints;
	maxHitPoints = rhs.maxHitPoints;
	energyPoints = rhs.energyPoints;
	maxEnergyPoints = rhs.maxEnergyPoints;
	level = 1;
	name = rhs.name;
	meleeDamage = rhs.meleeDamage;
	rangedDamage = rhs.rangedDamage;
	armor = rhs.armor;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void NinjaTrap::ninjaShoebox( ClapTrap &obj )
{
	(void)obj;
	std::cout << "NinjaTrap " << name << " did special attack ninja shoebox on a ClapTrap \n";
}

void NinjaTrap::ninjaShoebox( FragTrap &obj )
{
	(void)obj;
	std::cout << "NinjaTrap " << name << " did special attack ninja shoebox on a FragTrap \n";
}

void NinjaTrap::ninjaShoebox( ScavTrap &obj )
{
	(void)obj;
	std::cout << "NinjaTrap " << name << " did special attack ninja shoebox on a ScavTrap \n";
}

void NinjaTrap::ninjaShoebox( NinjaTrap &obj )
{
	(void)obj;
	std::cout << "NinjaTrap " << name << " did special attack ninja shoebox on a NinjaTrap \n";
}


/* ************************************************************************** */