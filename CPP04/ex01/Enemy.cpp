/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:45:41 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:16:17 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy()
{
	hp = -1;
	type = "(null)";
}

Enemy::Enemy(int a_hp, std::string const & a_type)
{
	hp = a_hp;
	type = a_type;
}

Enemy::Enemy( const Enemy & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	hp = rhs.getHP();
	type = rhs.getType();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Enemy const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Enemy::setType(std::string a_type)
{
	type = a_type;
}

std::string Enemy::getType() const
{
	return type;
}

void Enemy::setHP(int newHp)
{
	hp = newHp;
}

int Enemy::getHP() const
{
	return hp;
}

void Enemy::takeDamage(int damage)
{
	if (hp < 0)
		return ;
	if (hp - damage < 0)
		hp = 0;
	else
		hp -= damage;
}

/* ************************************************************************** */