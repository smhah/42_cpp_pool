/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 00:43:33 by macbook           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:15 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class Awesome
// {
//     public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//     private:
//     int _n;
//     };
//     std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
//     template< typename T >
//     void print( T const & x ) { std::cout << x << std::endl; return; }
//     int main() {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];
//     iter( tab, 5, print );
//     iter( tab2, 5, print );
//     return 0;
// }

int main()
{
    char array_char[5] = {'a', 'b', 'c', 'd', 'e'};
    int  array_int[3] = {1, 2, 3};
    float array_float[3] = {1.4f, 2.4f, 3.4f};
    
    iter(array_char, 5, printArray);
    iter(array_int, 3, printArray);
    iter(array_float, 3, printArray);
}