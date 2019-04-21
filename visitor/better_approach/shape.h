#ifndef SHAPE_H
#define SHAPE_H

#include <cstdint>

#include "shape_visitor.h"

class Shape
{
public:
	virtual ~Shape() = default;
	virtual void accept(ShapeVisitor& v) const = 0;
};

class Circle : public Shape
{
public:
	explicit Circle() = default;
	Circle(uint32_t x, uint32_t y, uint32_t r)
		: center_x {x}, center_y {y}, radius {r}
	{}
	~Circle() override = default;

public:
	uint32_t getRadius() const { return radius; }
	void accept(ShapeVisitor& v) const override { v.visit(*this); }

private:
	uint32_t center_x, center_y;
	uint32_t radius;
};

class Square : public Shape
{
public:
	explicit Square() = default;
	Square(uint32_t x, uint32_t y, uint32_t s)
		: up_left_x	{x}
		, up_left_y	{y}
		, side		{s}
	{}
	~Square() override = default;

public:
	uint32_t getSide() const { return side; }
	void accept(ShapeVisitor& v) const override { v.visit(*this); }

private:
	uint32_t up_left_x, up_left_y;
	uint32_t side;	
};

#endif // SHAPE_H
