/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 02:30:53 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/27 03:11:55 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	nb_neurons = 10;
}

std::string	Brain::identify()
{
	std::stringstream address;
	address << (void *)this;
	return address.str();
}
