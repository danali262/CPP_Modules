#include "Fixed.hpp"

int main(void)
{
	Fixed			a;
    // Fixed const		b( Fixed( 5.05f ) * Fixed ( 2 ) );
	Fixed			c ( 10 );
	Fixed			d ( 11.5f );

	std::cout << "\t\t\tSubject tests: " << std::endl;
	std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	// std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "\t\t\tExtra tests: " << std::endl;
	std::cout << " c is " << c << std::endl;
	std::cout << " d is " << d << std::endl;
	std::cout << " c > d is " << (c > d) << std::endl;
	std::cout << " c < d is " << (c < d) << std::endl;
	std::cout << " c >= d is " << (c >= d) << std::endl;
	std::cout << " c <= d is " << (c <= d) << std::endl;
	std::cout << " c == d is " << (c == d) << std::endl;
	std::cout << " c != d is " << (c != d) << std::endl;

    return (0);
}
