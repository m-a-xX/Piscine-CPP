/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:46:05 by mavileo           #+#    #+#             */
/*   Updated: 2020/11/28 18:26:09 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    std::cout << "robert name : " << robert.getName() << std::endl;
    std::cout << "robert title : " << robert.getTitle() << std::endl;
    robert.introduce();
    std::cout << "jim name : " << jim.getName() << std::endl;
    jim.introduce();
    jim.getPolymorphed();
    std::cout << "joe name : " << joe.getName() << std::endl;
    joe.introduce();
    joe.getPolymorphed();
    return 0;
}