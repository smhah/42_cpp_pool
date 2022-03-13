/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:47:49 by macbook           #+#    #+#             */
/*   Updated: 2021/12/18 21:46:05 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed{
    
    private:
        int _fixed_point;
        static const int _fbits = 8;

    public:
        Fixed(void);
        Fixed(const int integer);
        Fixed(const float floating);
        float toFloat(void) const;
        int toInt(void) const;
        Fixed(const Fixed & to_copy);
        Fixed &operator=(const Fixed & to_assign);
        int get_raw_bits(void) const;
        void set_raw_bits(int const raw);
        ~Fixed(void);
};
 
std::ostream & operator<<(std::ostream & stream, const Fixed & to_write);
#endif