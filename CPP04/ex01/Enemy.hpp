/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:45:45 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/29 00:19:35 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

	public:

		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy( Enemy const & src );
		virtual ~Enemy();

		Enemy &		operator=( Enemy const & rhs );

		void setType(std::string);
		std::string getType() const;
		void setHP(int);
		int getHP() const;
		virtual void takeDamage(int);

	private:

		int hp;
		std::string type;

};

std::ostream &			operator<<( std::ostream & o, Enemy const & i );

#endif /* *********************************************************** ENEMY_H */