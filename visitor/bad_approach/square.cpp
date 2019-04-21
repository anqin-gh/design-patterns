#include <iostream>
#include "square.h"

Square::Square(uint32_t x, uint32_t y, uint32_t s)
	: up_left_x	{x}
	, up_left_y	{y}
	, side		{s}
{ 
	std::cout << "Constructing square...\n";
}


void Square::print()
{

}

uint32_t Square::calculateArea()
{
	return 0;
}
