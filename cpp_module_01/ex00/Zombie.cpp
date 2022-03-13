/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:01:31 by smhah             #+#    #+#             */
/*   Updated: 2021/12/15 13:44:40 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout<< "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
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
    std::cout << "<" << this->name << ">" << " died " << std::endl;
}

