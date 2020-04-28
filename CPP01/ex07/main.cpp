/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 18:25:03 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/28 19:25:42 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 4 || !*av[1] || !*av[2] || !*av[3])
		return (1);

	std::ifstream		infile;
	std::ofstream		outfile;
	std::string			str_buff;
	std::string			s1(av[2]);
	std::string			s2(av[3]);
	std::stringstream	buffer;
	size_t				pos;

	infile.open(av[1]);
	if (infile.fail())
		return (1);
	outfile.open(std::string(av[1]) + ".replace");
	buffer << infile.rdbuf();
	str_buff = buffer.str();
	pos = str_buff.find(s1);
	while (pos != str_buff.npos)
	{
		str_buff.replace(pos, s1.length(), s2);
		pos = str_buff.find(s1);
	}
	outfile << str_buff;
	infile.close();
	outfile.close();
}
