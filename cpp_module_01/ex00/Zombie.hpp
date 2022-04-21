/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:48:47 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/06 18:14:52 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_
#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string);
	Zombie(void);
	~Zombie(void);
	void announce(void);
};

#endif