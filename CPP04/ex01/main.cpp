/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:15:54 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/29 00:18:53 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
    Character* moi = new Character("moi");
    std::cout << *moi;
    Enemy* b = new RadScorpion();
    Enemy* c = new SuperMutant();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    moi->equip(pf);
    std::cout << *moi;
    moi->attack(c);
    moi->attack(c);
    moi->attack(c);
    std::cout << *moi;
    moi->recoverAP();
    std::cout << *moi;
    moi->attack(c);
    delete moi;
    delete c;
    delete pr;
    delete pf;
    return 0;
}