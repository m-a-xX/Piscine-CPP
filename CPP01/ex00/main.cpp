/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 11:01:16 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/29 00:17:04 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
//#include <crtdbg.h>

void	ponyOnTheStack(void)
{
	Pony jean("Jean", 0);

	jean.print_position();
	jean.forward();
	jean.print_position();
}

void	ponyOnTheHeap(void)
{
	Pony *jeanne = new Pony("Jeanne", 0);

	jeanne->print_position();
	jeanne->forward();
	jeanne->print_position();
	delete jeanne;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	system("leaks a.out");
	return (0);
}