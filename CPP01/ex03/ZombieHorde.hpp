/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 21:14:46 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/27 02:18:37 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIEHORSE_HPP
#define ZOMBIEHORSE_HPP

#include "Zombie.hpp"
#include <string>
#include <random>

class ZombieHorde
{
private:
	Zombie *zombies;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void free();
	void free_p();
};

#endif