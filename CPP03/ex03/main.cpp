/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:00:59 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 01:00:15 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	FragTrap	robot1("Frag");
	ScavTrap	robot2("Scav");
	NinjaTrap	robot3("Ninja");

	std::cout << std::endl;

	robot1.meleeAttack("Carl");	
	robot1.rangedAttack("Carl");	
	robot1.takeDamage(45);
	robot1.beRepaired(400);
	robot1.vaulthunter_dot_exe("Carl");

	std::cout << std::endl;

	robot2.meleeAttack("Carl");	
	robot2.rangedAttack("Carl");	
	robot2.takeDamage(130);
	robot2.beRepaired(400);
	robot2.challengeNewcomer();
	
	std::cout << std::endl;

	robot3.meleeAttack("Carl");	
	robot3.rangedAttack("Carl");	
	robot3.takeDamage(130);
	robot3.beRepaired(400);
	robot3.ninjaShoebox(robot1);
	robot3.ninjaShoebox(robot2);

	std::cout << std::endl;
	return (0);
}