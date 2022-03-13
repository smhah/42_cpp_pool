/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:47:47 by macbook           #+#    #+#             */
/*   Updated: 2021/12/19 15:22:01 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main()
{
    Fixed a;
    Fixed j(10);
    Fixed jj(20);
    Fixed const b(40);
    Fixed const bb(20);
    Fixed const c(42.42f);
    Fixed const d(b);
    Fixed incr(0);
    Fixed oper1(6);
    Fixed oper2(10);

    std::cout << "6 + 3 = " << oper1.toInt() + oper2.toInt() << std::endl;
    std::cout << "6 - 3 = " << oper1.toInt() - oper2.toInt() << std::endl;
    std::cout << "6 * 3 = " << oper1.toInt() * oper2.toInt() << std::endl;
    std::cout << "6 / 3 = " << oper1.toInt() / oper2.toInt() << std::endl;

    if(oper1 != oper2)
        std::cout << "oper1 is different to oper2" << std::endl;
    if(oper1 > oper2)
        std::cout << "oper1 is superior to oper2" << std::endl;
    else if (oper1 < oper2)
        std::cout << "oper1 is inferior to oper2" << std::endl;
    else if (oper1 == oper2)
        std::cout << "oper1 is equal to oper2" << std::endl;

    std::cout <<"incr is "<< incr << std::endl;
    incr++;
    std::cout <<"incr after increment "<< incr << std::endl;
    incr--;
    std::cout <<"incr after decrement "<< incr << std::endl;
    //
    // std::cout << "b incremented:" << b << std::endl;
    std::cout <<"const min is: " << Fixed::min(b, bb).toInt() << std::endl;
    std::cout <<"const max is: " << Fixed::max(b, bb).toInt() << std::endl;

    std::cout <<"min is: " << Fixed::min(j, jj).toInt() << std::endl;
    std::cout <<"max is: " << Fixed::max(j, jj).toInt() << std::endl;
    //std::cout << "b + bb= " << b.toInt() / bb.toInt() << std::endl;
    // if(b > bb)
    //     std::cout << "b is superior to c" << std::endl;
    // else
    //     std::cout << "b is inferior to c" << std::endl;
}
