#include <iostream>
#include "shape.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Circle c{0, 0, 5};
	c.print();
	cout << "The area of this circle is " << c.calculateArea() << endl;

	return 0;
}
