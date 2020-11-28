/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:17 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 01:32:26 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(std::string input)
{
	std::cout << "Default constructor called\n";
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	name = input;
	meleeDamage = 30;
	rangedDamage = 30;
	armor = 5;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "Copy constructor called\n";
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "Destructor called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "Assignation operator called\n";
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

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " ranged attack " << target << " causing " << rangedDamage << " damage points !\n";
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " melee attack " << target << " causing " << meleeDamage << " damage points !\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armor;
	
	if (damage < 0)
		damage = 0;
	if (hitPoints - damage < 0)
		damage = hitPoints;
	hitPoints -= damage;
	std::cout << "FR4G-TP " << name << " take " << damage << " damage points !\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (hitPoints + amount > 100)
		amount = 100 - hitPoints;
	hitPoints += amount;
	std::cout << "FR4G-TP " << name << " retreive " << amount << " hit points !\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (energyPoints < 24)
	{
		std::cout << "To low energy, can't attack\n";
		return ;
	}
	energyPoints -= 25;
	std::string attacks[] = {"attack1", "attack2", "attack3", "attack4", "attack5"};
	int index = (rand() % 5 + 1) - 1;
	std::cout << "FR4G-TP " << name << " did " << attacks[index] << " on " << target << std::endl;
}


/* ************************************************************************** */