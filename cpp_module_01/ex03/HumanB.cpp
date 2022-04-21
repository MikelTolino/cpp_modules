/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:23:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/06 19:54:05 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::HumanB(std::string name, Weapon *w)
{
	_weapon = w;
	_name = name;
}

HumanB::~HumanB(void) {

	return;
}


void HumanB::attack(void) {

	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	return;
}

void HumanB::setWeapon(Weapon *w) {

	_weapon = w;
}
