/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:58:19 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:11:36 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>
# include <string>

class Character
{

	public:

		Character();
		Character(std::string const & name);
		Character( Character const & src );
		virtual ~Character();

		Character &		operator=( Character const & rhs );

		std::string getName() const;
		int getAP();
		AWeapon *getWeapon();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);		

	private:

		std::string name;
		int ap;
		AWeapon *weapon;
};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */