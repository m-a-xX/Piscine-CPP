/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:32:56 by user42            #+#    #+#             */
/*   Updated: 2020/11/25 14:10:51 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		Fixed( int number );
		Fixed( float number );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );
		friend std::ostream&	operator<<( std::ostream & o, Fixed const & i );

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		
		int value;
		static const int bits = 8;
};

std::ostream&	operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */