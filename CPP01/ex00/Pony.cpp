/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 10:52:28 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/28 19:41:49 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(string name_arg, int pos)
{
	name = name_arg;
	position = pos;
}

void	Pony::forward()
{
	position += 5;
}

void	Pony::print_position()
{
	cout << name << " est a la position " << position << endl;
}
