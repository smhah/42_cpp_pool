/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:22:09 by macbook           #+#    #+#             */
/*   Updated: 2021/12/07 18:34:49 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Default destructor called" << std::endl;
}

const std::string	&Weapon::get_type(void)
{
	return (this->type);
}

void	Weapon::set_type(std::string type)
{
	this->type = type;
	return ;
}
