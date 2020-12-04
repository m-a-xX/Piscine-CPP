/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:32:58 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 18:41:22 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"
# include <iostream>
# include <string>

class PowerFist : public AWeapon
{

	public:

		PowerFist();
		PowerFist( PowerFist const & src );
		virtual ~PowerFist();

		PowerFist &		operator=( PowerFist const & rhs );

		void attack() const;

	private:

};

std::ostream &			operator<<( std::ostream & o, PowerFist const & i );

#endif /* ********************************************************* PowerFist_H */