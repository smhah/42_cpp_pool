/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:47:51 by macbook           #+#    #+#             */
/*   Updated: 2021/12/18 12:29:23 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0)
{
   std::cout << "Default constructor called" << std::endl; 
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed & to_copy)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixed_point = to_copy.get_raw_bits();
    return ;
}

Fixed &Fixed::operator=(const Fixed & to_assign)
{
    std::cout << "Assignation operator called" << std::endl;
    _fixed_point = to_assign.get_raw_bits();
    return *this;
}

int     Fixed::get_raw_bits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixed_point);
}

void    Fixed::set_raw_bits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixed_point = raw;
}