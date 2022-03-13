/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:50:19 by macbook           #+#    #+#             */
/*   Updated: 2021/12/07 11:17:08 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str;
	std::string *stringPTR;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "address using str:" << &str << std::endl;
	std::cout << "address using ptr:" << stringPTR << std::endl;
	std::cout << "address using ref:" << &stringREF << std::endl;

	std::cout << "value using ptr:" << *stringPTR << std::endl;
	std::cout << "value using ref:" << stringREF << std::endl;
}