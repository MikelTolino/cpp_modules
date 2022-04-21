/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:15:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/06 19:39:07 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "Weapon.hpp"
#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string);
	Weapon();
	~Weapon();
	std::string getType(void);
	void setType(std::string);
};

#endif