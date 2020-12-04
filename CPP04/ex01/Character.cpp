/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:58:17 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:12:16 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	name = "Character";
	ap = 40;
	weapon = NULL;
}

Character::Character(std::string const & a_name)
{
	name = a_name;
	ap = 40;
	weapon = NULL;
}

Character::Character( const Character & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	name = rhs.name;
	ap = rhs.ap;
	weapon = rhs.weapon;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	Character &ch = (Character &)i;
	if (ch.getWeapon() == NULL)
		o << ch.getName() << " has " << ch.getAP() << " AP and is unarmed\n";
	else
		o << ch.getName() << " has " << ch.getAP() << " AP and carries a " << ch.getWeapon()->getName() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::recoverAP()
{
	ap += 10;
}

void Character::equip(AWeapon* a_weapon)
{
	weapon = a_weapon;
}

void Character::attack(Enemy* a_enemy)
{
	if (weapon == NULL)
	{
		std::cout << "No weapon equiped\n";
		return ;
	}
	if (ap < weapon->getAPCost())
	{
		std::cout << "Too low Action Points\n";
		return ;
	}
	std::cout << name <<  " attaque " << a_enemy->getType() << " with a " << weapon->getName() << std::endl;
	weapon->attack();
	ap -= weapon->getAPCost();
	if (a_enemy->getHP() - weapon->getDamage() < 0)
		delete a_enemy;
	else
		a_enemy->setHP(a_enemy->getHP() - weapon->getDamage());
}

std::string Character::getName() const
{
	return name;
}

int Character::getAP()
{
	return ap;
}

AWeapon *Character::getWeapon()
{
	return weapon;
}


/* ************************************************************************** */