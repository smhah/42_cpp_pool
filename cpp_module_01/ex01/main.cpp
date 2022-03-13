/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:47:00 by smhah             #+#    #+#             */
/*   Updated: 2021/12/06 22:45:24 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    int i;

    i = 0;
    horde = zombieHorde(5, "spartakos");
    while(i < 5)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
}