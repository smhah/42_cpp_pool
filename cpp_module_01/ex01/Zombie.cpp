/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:44:28 by smhah             #+#    #+#             */
/*   Updated: 2021/12/06 22:48:01 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout<< "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string str)
{
    this->name = str;
}

Zombie::Zombie(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
    std::cout << "constructor called" << std::endl;
    this->name = name;
}

std::string Zombie::get_name()
{
    return (this->name);
}

Zombie::~Zombie(void)
{
    std::cout << "destructor called" << std::endl;
    std::cout << name <<  " died" << std::endl;
}