/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:17 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 01:31:49 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called\n";
	level = 1;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "ClapTrap copy constructor called\n";
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "ClapTrap assignation operator called\n";
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
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "ClapTrap " << name << " ranged attack " << target << " causing " << rangedDamage << " damage points !\n";
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "ClapTrap " << name << " melee attack " << target << " causing " << meleeDamage << " damage points !\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armor;
	
	if (damage < 0)
		damage = 0;
	if (hitPoints - damage < 0)
		damage = hitPoints;
	hitPoints -= damage;
	std::cout << "ClapTrap " << name << " take " << damage << " damage points !\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints + amount > 100)
		amount = 100 - hitPoints;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " retreive " << amount << " hit points !\n";
}


/* ************************************************************************** */