/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 02:30:58 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/27 03:14:27 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_HPP
#define HUMAN_HPP

# include "Brain.hpp"

class Human
{
private:
	Brain brain;
public:
	Human(/* args */);
	~Human();
	std::string	identify();
	Brain		&getBrain();
};

#endif
