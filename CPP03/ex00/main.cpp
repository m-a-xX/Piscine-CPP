/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:00:59 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/26 15:26:32 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	robot1("Bob");

	robot1.meleeAttack("Carl");	
	robot1.rangedAttack("Carl");	
	robot1.takeDamage(45);
	robot1.takeDamage(3);
	robot1.takeDamage(150);
	robot1.beRepaired(400);
	robot1.vaulthunter_dot_exe("Carl");
	robot1.vaulthunter_dot_exe("Carl");
	robot1.vaulthunter_dot_exe("Carl");
	robot1.vaulthunter_dot_exe("Carl");
	robot1.vaulthunter_dot_exe("Carl");
	return (0);
}