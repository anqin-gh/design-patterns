#include <cstdint>
#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H

class Square : public Shape
{
public:
	explicit Square() = delete;
	Square(uint32_t x, uint32_t y, uint32_t s);

public:
	virtual void print();
	virtual uint32_t calculateArea();

private:
	uint32_t up_left_x, up_left_y;
	uint32_t side;	
};

#endif // SQUARE_H
