/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:45:45 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 22:45:46 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <iostream>
# include <string>

class SuperMutant : public Enemy
{

	public:

		SuperMutant();
		SuperMutant( SuperMutant const & src );
		virtual ~SuperMutant();

		SuperMutant &		operator=( SuperMutant const & rhs );

		void takeDamage(int);

	private:


};

std::ostream &			operator<<( std::ostream & o, SuperMutant const & i );

#endif /* *********************************************************** SuperMutant_H */