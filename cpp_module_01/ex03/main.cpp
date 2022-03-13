/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:43:06 by smhah             #+#    #+#             */
/*   Updated: 2021/12/15 14:53:40 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
int main()
{
    // Weapon club = Weapon("crude spiked club");
    // HumanA bob = HumanA("bob", club);

    // bob.attack();
    // club.set_type("some other type of club");
    // bob.attack();

    Weapon club = Weapon("crude spiked club");
    HumanB jim = HumanB("jim");
    jim.setWeapon(club);
    jim.attack();
    club.set_type("some other type of club");
    jim.attack();
   // {
        // Weapon club = Weapon("crude spiked club");
        // HumanA bob("Bob", club);
        // bob.attack();
        // club.setType("some other type of club");
        // bob.attack();
    // }
    // {
    //     Weapon club = Weapon("crude spiked club");
    //     HumanB jim("Jim");
    //     jim.setWeapon(club);
    //     jim.attack();
    //     club.setType("some other type of club");
    //     jim.attack();
    // }

    //
}