/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:37:56 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/26 21:45:48 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::give_name(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss ...\n";
}
