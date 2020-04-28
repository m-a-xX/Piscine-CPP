/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 02:30:55 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/27 03:06:52 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
private:
	int	nb_neurons;
public:
	Brain();
	std::string	identify();
};

#endif
