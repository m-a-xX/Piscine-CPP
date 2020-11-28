/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:17 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 01:32:34 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string input)
{
	std::cout << "New ScavTrap created\n";
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	name = input;
	meleeDamage = 20;
	rangedDamage = 15;
	armor = 3;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap cloned\n";
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deleted\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "ScavTrap cloned\n";
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

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SCAVTRAP " << name << " ranged attack " << target << " causing " << rangedDamage << " damage points !\n";
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCAVTRAP " << name << " melee attack " << target << " causing " << meleeDamage << " damage points !\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armor;
	
	if (damage < 0)
		damage = 0;
	if (hitPoints - damage < 0)
		damage = hitPoints;
	hitPoints -= damage;
	std::cout << "SCAVTRAP " << name << " take " << damage << " damage points !\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (hitPoints + amount > 100)
		amount = 100 - hitPoints;
	hitPoints += amount;
	std::cout << "SCAVTRAP " << name << " retreive " << amount << " hit points !\n";
}

void ScavTrap::challengeNewcomer()
{
	std::string challenges[] = {"challenge1", "challenge2"};
	int index = (rand() % 2 + 1) - 1;
	std::cout << "SCAVTRAP " << name << " resolved challenge " << challenges[index] << std::endl;
}


/* ************************************************************************** */