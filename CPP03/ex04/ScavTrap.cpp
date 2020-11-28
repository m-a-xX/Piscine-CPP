/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:17 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/27 15:28:55 by mavileo          ###   ########.fr       */
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
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::challengeNewcomer()
{
	std::string challenges[] = {"challenge1", "challenge2"};
	int index = (rand() % 2 + 1) - 1;
	std::cout << "ScavTrap " << name << " resolved challenge " << challenges[index] << std::endl;
}


/* ************************************************************************** */