/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:21:24 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/06 19:53:17 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon *w)
{
	_weapon = w;
	_name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void) {

	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	return;
}
