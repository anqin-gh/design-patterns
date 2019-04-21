#include <cstdint>

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
	virtual ~Shape() = 0;

public:
	virtual void print() = 0;
	virtual uint32_t calculateArea() = 0;
};

#endif // SHAPE_H
