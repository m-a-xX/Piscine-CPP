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
	Pony stackPony("stackPony", 0);

	stackPony.print_position();
	stackPony.forward();
	stackPony.print_position();
}

void	ponyOnTheHeap(void)
{
	Pony *heapPony = new Pony("heapPony", 0);

	heapPony->print_position();
	heapPony->forward();
	heapPony->print_position();
	delete heapPony;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}