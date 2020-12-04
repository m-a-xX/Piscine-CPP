/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:14:56 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:13:30 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>

class Sorcerer
{

	public:

		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const & src );
		virtual ~Sorcerer();

		Sorcerer &		operator=( Sorcerer const & rhs );

		std::string getName();
		std::string getTitle();
		void	introduce();
		void	polymorph(Victim const &) const;

	private:

		Sorcerer();
		std::string name;
		std::string title;
};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif /* ******************************************************** SORCERER_H */