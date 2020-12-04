/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:32:58 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:17:36 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{

	public:

		AWeapon();
		AWeapon(std::string const & name, int damage, int apcost);
		AWeapon( AWeapon const & src );
		virtual ~AWeapon();

		AWeapon &		operator=( AWeapon const & rhs );

		void setName(std::string);
		void setAPCost(int);
		void setDamage(int);
 		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

	private:
		
		std::string name;
		int damage;
		int cost;

};

std::ostream &			operator<<( std::ostream & o, AWeapon const & i );

#endif /* ********************************************************* AWEAPON_H */