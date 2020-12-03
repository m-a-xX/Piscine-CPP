/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 23:50:24 by mavileo           #+#    #+#             */
/*   Updated: 2020/12/03 10:08:37 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* moi = new Character("moi");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    ICharacter* bob = new Character("bob");
    moi->use(0, *bob);
    moi->use(1, *bob);
    std::cout << "Bob 0 materia type : " << tmp->getType() << " and XP : " << tmp->getXP() << std::endl;
    AMateria *mat = new Ice();
    std::cout << "Ice materia type : " << mat->getType() << " and XP : " << mat->getXP() << std::endl;
    mat->use(*moi);
    std::cout << "Ice materia type : " << mat->getType() << " and XP : " << mat->getXP() << std::endl;
    mat->use(*moi);
    std::cout << "Ice materia type : " << mat->getType() << " and XP : " << mat->getXP() << std::endl;
    delete bob;
    delete moi;
    delete src;
    delete mat;
    return 0;
}