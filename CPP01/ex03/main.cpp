/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 21:14:41 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/27 02:27:48 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde *horde_heap;
	ZombieHorde horde_stack(10);

	std::cout << std::endl;
	horde_heap = new ZombieHorde(10);
	delete horde_heap;
	return 0;
}