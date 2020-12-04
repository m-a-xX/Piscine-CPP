/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:45:45 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 22:45:46 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"
# include <iostream>
# include <string>

class RadScorpion : public Enemy
{

	public:

		RadScorpion();
		RadScorpion( RadScorpion const & src );
		virtual ~RadScorpion();

		RadScorpion &		operator=( RadScorpion const & rhs );


	private:

};

std::ostream &			operator<<( std::ostream & o, RadScorpion const & i );

#endif /* *********************************************************** RadScorpion_H */