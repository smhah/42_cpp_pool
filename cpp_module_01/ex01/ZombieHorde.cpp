/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:47:11 by smhah             #+#    #+#             */
/*   Updated: 2021/12/15 13:48:49 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde;
    int i;

    i = 0;
    horde = new Zombie[N];
    while(i < N)
    {
        horde[i] = *new Zombie(name);
        i++;
    }
    return horde;
}