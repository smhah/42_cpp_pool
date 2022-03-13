/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:47:51 by macbook           #+#    #+#             */
/*   Updated: 2021/12/19 14:55:26 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(const int integer)
{
    std::cout << "int constructor called" << std::endl;
    _fixed_point = integer * (1 << _fbits);
    //_fixed_point = integer;
    return ;    
}

Fixed::Fixed(const float floating)
{
    std::cout << "float constructor called" << std::endl;
    //_fixed_point = floating;
    _fixed_point = roundf(floating * (1 << _fbits));
    return ;    
}

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
    //std::cout << "getRawBits member function called" << std::endl;
    return (_fixed_point);
}

void    Fixed::set_raw_bits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_point = raw;
}

int     Fixed::toInt(void) const
{
    //_fixed_point = _fixed_point /(1 << _fbits);
    return (get_raw_bits() /(1 << _fbits));
}

float   Fixed::toFloat(void) const
{
    return((float)get_raw_bits() / (float)(1 << _fbits));
}

std::ostream & operator<<(std::ostream & stream, const Fixed & to_write)
{
    stream << to_write.get_raw_bits();
    return (stream);
}

bool Fixed::operator>(const Fixed & to_compare) const
{
    return(this->get_raw_bits() > to_compare.get_raw_bits());
}

bool Fixed::operator<(const Fixed & to_compare) const
{
    return(this->get_raw_bits() < to_compare.get_raw_bits());
}

bool Fixed::operator<=(const Fixed & to_compare) const
{
    return(this->get_raw_bits() <= to_compare.get_raw_bits());
}

bool Fixed::operator>=(const Fixed & to_compare) const
{
    return(this->get_raw_bits() >= to_compare.get_raw_bits());
}

bool Fixed::operator==(const Fixed & to_compare) const
{
    return(this->get_raw_bits() == to_compare.get_raw_bits());
}

bool Fixed::operator!=(const Fixed & to_compare) const
{
    return(this->get_raw_bits() != to_compare.get_raw_bits());
}

Fixed Fixed::operator+(const Fixed & to_add) const
{
    return(Fixed(get_raw_bits() + to_add.get_raw_bits()));
}

Fixed Fixed::operator-(const Fixed & to_add) const
{
    return(Fixed(get_raw_bits() - to_add.get_raw_bits()));
}

Fixed Fixed::operator*(const Fixed & to_add) const
{
    return(Fixed(get_raw_bits() * to_add.get_raw_bits()));
}

Fixed Fixed::operator/(const Fixed & to_add) const
{
    return(Fixed(get_raw_bits() / to_add.get_raw_bits()));
}

Fixed Fixed::operator++()
{
    ++this->_fixed_point;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    this->_fixed_point++;
    return (*this);
}

Fixed Fixed::operator--()
{
    --this->_fixed_point;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    this->_fixed_point--;
    return (*this);
}

Fixed & Fixed::min(Fixed & first, Fixed & second)
{
    if(first.get_raw_bits() < second.get_raw_bits())
        return first;
    return second;   
}

Fixed & Fixed::max(Fixed & first, Fixed & second)
{
    if(first.get_raw_bits() > second.get_raw_bits())
        return first;
    return second;   
}

Fixed const & Fixed::min(const Fixed & first, const Fixed  & second)
{
    if(first.get_raw_bits() < second.get_raw_bits())
        return first;
    return second;   
}

Fixed const & Fixed::max(const Fixed & first, const Fixed  & second)
{
    if(first.get_raw_bits() > second.get_raw_bits())
        return first;
    return second;   
}