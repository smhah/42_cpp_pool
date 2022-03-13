/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:20:21 by smhah             #+#    #+#             */
/*   Updated: 2021/12/07 18:18:51 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon &wp) : name(nm), weapon(wp)
{
    std::cout << "humanA constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "humanA destructor called" << std::endl;    
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.get_type() << std::endl;
}