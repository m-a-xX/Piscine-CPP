/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:32:58 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 18:41:22 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <iostream>
# include <string>

class PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle();
		PlasmaRifle( PlasmaRifle const & src );
		virtual ~PlasmaRifle();

		PlasmaRifle &		operator=( PlasmaRifle const & rhs );

		void attack() const;

	private:

};

std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i );

#endif /* ********************************************************* PlasmaRifle_H */