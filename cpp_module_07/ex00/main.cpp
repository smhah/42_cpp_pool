#include <iostream>
#include <string>
#include <string.h>
//#include "template.hpp"

template <typename T>

T  max(T const & a, T const & b)
{
    if(a > b)
        return a;
    else
        return b;
}

template <typename T>

T  min(T const & a, T const & b)
{
    if(a >= b)
        return b;
    else
        return a;
}

template <typename T>
void    swap(T & a, T  & b)
{
    T t;
    t = a;
    a = b;
    b = t;
}


//copy class
class Awesome
    {
    public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
    private:
    int _n;
    };
    std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }
//
int main(void)
{
    Awesome a(2), b(4);
    swap(a, b);
    std::cout << a << " " << b << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;
    return (0);
}
// int main()
// {
//     // float a = 1.3f;
//     // float b = 2.5f;
//     // int a = 1;
//     // int b = 2;
//     // char a = 'a';
//     // char b = 'b';
//     std::string a = "string_a";
//     std::string b = "string_b";

//     std::cout << "max is " << ::max(a, b) << std::endl;
//     std::cout << "min is " << ::min(a, b) << std::endl;
//     swap(a, b);
//     std::cout << "a is " << a << "| b is " << b << std::endl;
// }

// int main( void ) {
//     int a = 2;
//     int b = 3;
//     ::swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//     return 0;
// }