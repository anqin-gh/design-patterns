#include <iostream>
#include <vector>

#include "shape.h"
#include "shape_visitor.h"

using namespace std;

int main(int argc, char const *argv[])
{
	// Declare shapes
	auto c		= Circle{};
	auto c2		= Circle{0, 0, 5};
	auto s 		= Square{1, 2, 3};
	
	// Declare shapes container and store pointers to previous shapes
	auto shapes = vector<Shape*>{&c, &s, &c2};

	// Declare concrete visitors for different operations
	auto printer 				= ShapePrinter();
	auto areaCalculator 		= ShapeAreaCalculator();
	auto perimeterCalculator 	= ShapePerimeterCalculator();
	
	// Iterate through vector of shapes and operate
	for (const auto* sh : shapes)
	{
		cout << "The area of this ";
		sh->accept(printer);
		cout << printer.str() << " is ";
		sh->accept(areaCalculator);
		cout << areaCalculator.area;
		sh->accept(perimeterCalculator);
		cout << " and the perimeter " << perimeterCalculator.perimeter << endl;
	}

	return 0;
}
