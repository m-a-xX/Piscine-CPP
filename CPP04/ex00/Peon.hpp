/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:14:56 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 17:24:43 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>

class Peon : public Victim
{

	public:

		Peon(std::string name);
		Peon( Peon const & src );
		virtual ~Peon();

		Peon &		operator=( Peon const & rhs );

		void	getPolymorphed() const;

	private:

		Peon();
};

std::ostream &			operator<<( std::ostream & o, Peon const & i );

#endif /* ******************************************************** Peon_H */