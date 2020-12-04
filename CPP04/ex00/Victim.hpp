/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:14:56 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:14:52 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim();
		Victim(std::string name);
		Victim( Victim const & src );
		virtual ~Victim();

		Victim &		operator=( Victim const & rhs );

		std::string getName();
		void	setName(std::string name);
		void	introduce();
		virtual void	getPolymorphed() const;

	private:

		std::string name;
};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* ******************************************************** Victim_H */