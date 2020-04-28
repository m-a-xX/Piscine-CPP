/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:37:43 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/26 21:08:13 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <random>
# include <string>

class ZombieEvent
{
private:
	std::string	type;
public:
	void		setZombieType(std::string type);
	Zombie 		*newZombie (std::string name);
	void		randomChump();
	std::string	getType();
};

#endif
