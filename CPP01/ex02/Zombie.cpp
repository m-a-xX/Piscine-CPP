/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:37:56 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/26 18:22:19 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string new_name, std::string new_type)
{
	name = new_name;
	type = new_type;
}

void	Zombie::advert()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss ...\n";
}
