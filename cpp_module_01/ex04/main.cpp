/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:27:18 by smhah             #+#    #+#             */
/*   Updated: 2021/12/15 14:44:05 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string     ft_replace(std::string line, std::string to_replace, std::string replace_str)
{
	int	len_to_replace;
	int len_line;
	int p;
	int i;
	std::string temp;

	len_line = line.length();
	len_to_replace = to_replace.length();
	temp = line;
	while((p = line.find(to_replace)) != -1)
	{
		temp = line.substr(0, p);
		temp = temp + replace_str;
		temp = temp + line.substr(p + len_to_replace, len_line + p + len_to_replace);
		line = temp;
	}
	return (temp);
}

int main (int ac, char **av)
{
	std::ifstream file;
	std::ofstream ofile("file.replace");
	std::string line;
	std::string temp;
	int p;
	int len;

	if(ac != 4)
	{
		std::cout << "Error:arguments" << std::endl;
		return (1);
	}
	file.open(av[1]);
	if(file.fail())
	{
		std::cout << "Opening file fail" << std::endl;
		exit(1);
	}
	ft_replace(line, av[2], av[3]);
	while(std::getline(file, line))
	{
		(void)p;
		temp = ft_replace(line, av[2], av[3]);
		ofile << temp << std::endl;
	}
	ofile.close();
}