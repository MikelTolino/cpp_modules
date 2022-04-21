/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:48:20 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/04 12:17:56 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define NUM 5
Zombie* zombieHorde( int N, std::string name );

int	main()
{
	Zombie *horde;

	horde = zombieHorde(NUM, "Pepitos");
	for (size_t i = 0; i < NUM; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}