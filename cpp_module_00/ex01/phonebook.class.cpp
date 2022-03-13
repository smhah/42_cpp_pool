/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:13:53 by smhah             #+#    #+#             */
/*   Updated: 2021/12/06 15:59:15 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include <iostream>
#include <string.h>

phonebook::phonebook(void)
{
	std::cout << "Constructor called" << std::endl;
}

phonebook::~phonebook(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::string     contact::get_first_name()
{
	return this->first_name;
}

std::string     contact::get_last_name()
{
	return this->last_name;
}

std::string     contact::get_nickname()
{
	return this->nickname;
}

std::string     contact::get_phone_number()
{
	return this->phone_number;
}

std::string     contact::get_darkest_secret()
{
	return this->darkest_secret;
}

int				contact::get_id()
{
	return this->id;
}

void		contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void        contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void        contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void        contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void        contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}

void        contact::set_id(int i)
{
	this->id = i;
}