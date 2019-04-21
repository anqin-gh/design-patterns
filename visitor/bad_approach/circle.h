#include <cstdint>
#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape
{
public:
	explicit Circle() = delete;
	Circle(uint32_t x, uint32_t y, uint32_t r);
	virtual ~Circle() override = default;

public:
	virtual void print();
	virtual uint32_t calculateArea();

private:
	uint32_t center_x, center_y;
	uint32_t radius;
};

#endif // CIRCLE_H
