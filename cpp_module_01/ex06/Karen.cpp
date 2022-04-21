/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:29:15 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/20 11:51:59 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen( )
{
	int level;
	switch (log)
	{
	case INFO:
		info();
	case DEBUG:
		debug();
	case WARNING:
		warning();
	case ERROR:
		error();
		break;
	default:
		break;
	}
}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my\
	7XL-double-cheese-triple-pickle-special-ketchup burger.\
	I just love it!\n";
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money.\
	You don't put enough! If you did I would not have to ask for it!.\n";
}
void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\
	I've been coming here for years and you just started working here last month..\n";
}
void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain( std::string level )
{
	*f(level.data());
}