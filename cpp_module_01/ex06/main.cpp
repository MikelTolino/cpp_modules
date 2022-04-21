/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:29:17 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/20 12:09:13 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>
#include <string>

void print(char *msg) {

	std::cout << "loco";
	return;
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
		return 1;
	return 0;

	void *f;

	f = &print;
	f(argv[1]);
}
