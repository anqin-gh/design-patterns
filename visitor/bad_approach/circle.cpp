#include <iostream>
#include <cmath>
#include "circle.h"

Circle::Circle(uint32_t x, uint32_t y, uint32_t r)
	: center_x	{x}
	, center_y	{y}
	, radius	{r}
{ 
	std::cout << "Constructing cercle...\n"; 
}

void Circle::print() 
{ 
	std::cout 	<< "This is a circle of radius " << radius 
			<< " centered in x: " << center_x
			<< " and y: " << center_y << std::endl;
}

uint32_t Circle::calculateArea() 
{ 
	return M_PI * pow(radius, 2);
}
