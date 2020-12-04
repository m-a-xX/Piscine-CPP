/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:56:12 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:19:31 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>

class TacticalMarine : public ISpaceMarine
{

	public:

		TacticalMarine();
		TacticalMarine( TacticalMarine const & src );
		virtual ~TacticalMarine();

		TacticalMarine &		operator=( TacticalMarine const & rhs );

		ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;

	private:

};

std::ostream &			operator<<( std::ostream & o, TacticalMarine const & i );

#endif /* ************************************************** TACTICALMARINE_H */