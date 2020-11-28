/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:24 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 01:21:44 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>
# include <stdlib.h>

class NinjaTrap : virtual public ClapTrap
{

	public:

		NinjaTrap();
		NinjaTrap(std::string input);
		NinjaTrap( NinjaTrap const & src );
		~NinjaTrap();

		NinjaTrap &		operator=( NinjaTrap const & rhs );

		void ninjaShoebox( FragTrap &obj );
		void ninjaShoebox( ScavTrap &obj );
		void ninjaShoebox( NinjaTrap &obj );

	private:

};

std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i );

#endif /* ******************************************************* NinjaTrap_H */