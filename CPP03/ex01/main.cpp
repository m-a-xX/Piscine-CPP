/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:00:59 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/26 15:27:16 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	robot1("Frag");
	ScavTrap	robot2("Scav");

	robot1.meleeAttack("Carl");	
	robot1.rangedAttack("Carl");	
	robot1.takeDamage(45);
	robot1.takeDamage(3);
	robot1.takeDamage(130);
	robot1.beRepaired(400);
	robot1.vaulthunter_dot_exe("Carl");
	robot1.vaulthunter_dot_exe("Carl");
	robot1.vaulthunter_dot_exe("Carl");
	robot1.vaulthunter_dot_exe("Carl");
	robot1.vaulthunter_dot_exe("Carl");

	std::cout << std::endl;

	robot2.meleeAttack("Carl");	
	robot2.rangedAttack("Carl");	
	robot2.takeDamage(45);
	robot2.takeDamage(3);
	robot2.takeDamage(130);
	robot2.beRepaired(400);
	robot2.challengeNewcomer();
	robot2.challengeNewcomer();
	robot2.challengeNewcomer();
	return (0);
}