/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:47:47 by macbook           #+#    #+#             */
/*   Updated: 2021/12/19 17:52:09 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main()
{
    Fixed a;
    Fixed c;

    a.set_raw_bits(1);
    Fixed b(a);
    c = b;
    std::cout << a.get_raw_bits() << std::endl;
    std::cout << b.get_raw_bits() << std::endl;
    std::cout << c.get_raw_bits() << std::endl;

}