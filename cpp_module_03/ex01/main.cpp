/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 00:36:13 by macbook           #+#    #+#             */
/*   Updated: 2021/12/20 19:00:05 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    ClapTrap instance("spartakos");
    ScavTrap instance2("jojo");

    instance.attack("alien");
    instance.takeDamage(8);
    instance.beRepaired(4);

    instance2.attack("alien2");
    instance2.takeDamage(10);
    instance2.beRepaired(8);
    instance2.guardGate();
}