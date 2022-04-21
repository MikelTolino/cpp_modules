/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:38:16 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/19 13:22:49 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

std::string	replace(std::string line, const char *s1, const char *s2)
{
	size_t pos1;
	size_t pos2;
	std::string swap(line);
	std::string str1(s1);
	std::string str2(s2);
	size_t len_s1;

	pos1 = 0;
	len_s1 = str1.size();
	while ((pos2 = swap.find(s1, pos1)) != std::string::npos)
	{
		swap.erase(pos2, len_s1);
		swap.insert(pos2, str2);
		pos1 = pos2 + 1;
	}
	return (swap);
}