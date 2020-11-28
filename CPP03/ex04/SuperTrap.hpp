/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:24 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 01:26:09 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>
# include <string>
# include <stdlib.h>

class SuperTrap : public FragTrap, public NinjaTrap
{

	public:

		SuperTrap();
		SuperTrap(std::string input);
		SuperTrap( SuperTrap const & src );
		~SuperTrap();

		SuperTrap &		operator=( SuperTrap const & rhs );

		using FragTrap::rangedAttack;
		using NinjaTrap::meleeAttack;

	private:

};

std::ostream &			operator<<( std::ostream & o, SuperTrap const & i );

#endif /* ******************************************************* SuperTRAP_H */