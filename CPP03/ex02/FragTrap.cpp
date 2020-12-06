/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:17 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 13:52:44 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(std::string input)
{
	std::cout << "FragTrap Default constructor called\n";
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	name = input;
	meleeDamage = 30;
	rangedDamage = 20;
	armor = 5;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap Copy constructor called\n";
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "FragTrap Assignation operator called\n";
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (energyPoints < 24)
	{
		std::cout << "Too low energy, can't attack\n";
		return ;
	}
	energyPoints -= 25;
	std::string attacks[] = {"attack1", "attack2", "attack3", "attack4", "attack5"};
	int index = (rand() % 5 + 1) - 1;
	std::cout << "FR4G-TP " << name << " did " << attacks[index] << " on " << target << std::endl;
}


/* ************************************************************************** */