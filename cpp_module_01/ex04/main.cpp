/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:58:27 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/19 13:23:24 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replace(std::string line, const char *s1, const char *s2);

/* 1. Errors
2. Open file
3. Read file
4. Replace string
5. Write string */

int main(int argc, char const *argv[])
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string filename(argv[1]);
	std::string buff;
	std::string swap;

	if (argc != 4)
	{
		std::cerr << "Number of arguments invalid \n" << "Usage: ./replace <file> <tofind> <replace> \n";
		return (1);
	}
	infile.open(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "File could not be opened\n";
		return (1);
	}
	filename.append(".replace");
	outfile.open(filename);
	while (std::getline(infile, buff))
	{
		swap = replace(buff, argv[2], argv[3]);
		outfile << swap << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}