/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:56:12 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:19:15 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		virtual ~AssaultTerminator();

		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

		ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;

	private:

};

std::ostream &			operator<<( std::ostream & o, AssaultTerminator const & i );

#endif /* ************************************************** ASSAULTTERMINATOR__H */