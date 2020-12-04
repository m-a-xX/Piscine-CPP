/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 23:06:05 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/04 10:41:11 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{

    private:
        std::string type;
        unsigned int _xp;
        
    public:

		AMateria();
        AMateria(std::string const & type);
		AMateria( AMateria const & src );
		virtual ~AMateria();
        std::string const & getType() const;
        unsigned int getXP() const;
        void setXP(int);
        void setType(std::string type);

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

		AMateria &		operator=( AMateria const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */