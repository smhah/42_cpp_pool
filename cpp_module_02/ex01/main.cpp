/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:47:47 by macbook           #+#    #+#             */
/*   Updated: 2021/12/19 17:59:16 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b(5);
    Fixed const c(42.42f);
    Fixed const d(b);
    
    a = c;
    // std::cout << a.get_raw_bits() << std::endl;
    // std::cout << b.get_raw_bits() << std::endl;
    // std::cout << c.get_raw_bits() << std::endl;
    //std::cout << "a is " << a << std::endl;
    std::cout << "fixed_value_a is " << b << std::endl;
    std::cout << "a is: " << a.toFloat() << std::endl;

    std::cout << "fixed_value_b is " << b << std::endl;
    std::cout << "b is: " << b.toInt() << std::endl;

    std::cout << "fixed_value_c is " << c << std::endl;
    std::cout << "c is " << c.toFloat() << std::endl;

    std::cout << "fixed_value_d is " << c << std::endl;
    std::cout << "c is " << d.toInt() << std::endl;
    //std::cout << "c is " << c << std::endl;
    //std::cout << "d is " << d << std::endl;
    //std::cout << c.toFloat() << std::endl;
}