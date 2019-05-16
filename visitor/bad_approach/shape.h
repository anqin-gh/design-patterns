#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
public:
	virtual ~Shape() = default;

public:
	virtual void print() = 0;
	virtual float calculateArea() = 0;
};

class Square : public Shape
{
public:
	explicit Square() = default;
	Square(float x, float y, float s)
		: m_up_left_x	{x}
		, m_up_left_y	{y}
		, m_side		{s}
	{ 
	}

public:
	virtual void print() { cout << "square" << endl; }
	virtual float calculateArea() { return pow(m_side, 2); }

private:
	float m_up_left_x, m_up_left_y;
	float m_side;	
};

class Circle : public Shape
{
public:
	explicit Circle() = default;
	Circle(float x, float y, float r)
		: m_center_x	{x}
		, m_center_y	{y}
		, m_radius		{r}
	{ 
	}
	virtual ~Circle() override = default;

public:
	virtual void print() { cout << "cercle" << endl; }
	virtual float calculateArea() { return M_PI * pow(m_radius, 2); }

private:
	float m_center_x, m_center_y;
	float m_radius;
};

#endif // SHAPE_H
