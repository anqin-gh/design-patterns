#include <iostream>

#include "circle.h"
// #include "square.h"

int main(int argc, char const *argv[])
{
	Circle c{0, 0, 5};
	c.print();
	std::cout << "The area of this circle is " << c.calculateArea() << std::endl;

	return 0;
}
