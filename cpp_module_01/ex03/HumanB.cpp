/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:27:27 by smhah             #+#    #+#             */
/*   Updated: 2021/12/09 14:45:39 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Weapon.hpp"
// #include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    return ;
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon->get_type() << std::endl;
}

void    HumanB::setWeapon(Weapon &wp)
{
    this->weapon = &wp;
}
// void    HumanB::HumanB(void)
// {
//     std::cout << "HumanB constructor called" << std::endl;
// }

HumanB::~HumanB(void)
{
    std::cout << "HumanB destructor called" << std::endl;
}
