#ifndef SHAPE_H
#define SHAPE_H

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
	Circle(float x, float y, float r)
		: m_center_x {x}, m_center_y {y}, m_radius {r}
	{}
	~Circle() override = default;

public:
	float getRadius() const { return m_radius; }
	void accept(ShapeVisitor& v) const override { v.visit(*this); }

private:
	float m_center_x, m_center_y;
	float m_radius;
};

class Square : public Shape
{
public:
	explicit Square() = default;
	Square(float x, float y, float s)
		: m_up_left_x	{x}
		, m_up_left_y	{y}
		, m_side		{s}
	{}
	~Square() override = default;

public:
	float getSide() const { return m_side; }
	void accept(ShapeVisitor& v) const override { v.visit(*this); }

private:
	float m_up_left_x, m_up_left_y;
	float m_side;	
};

#endif // SHAPE_H
