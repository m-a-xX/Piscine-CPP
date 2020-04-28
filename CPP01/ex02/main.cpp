/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:37:46 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/26 21:08:37 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zevent;
	Zombie	*zombie;

	std::cout << "Create EventZombie obj on stack of type \"Rampant\"\n";
	zevent.setZombieType("Rampant");
	std::cout << "The type of the EventZombie obj is : " << zevent.getType() << std::endl;
	std::cout << "Create zombie on heap called \"Heap Zombie\"\n";
	zombie = zevent.newZombie("Heap Zombie");
	zombie->advert();
	delete zombie;
	std::cout << "Create zombie with a random name\n";
	zevent.randomChump();
}