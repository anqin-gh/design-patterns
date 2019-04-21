#ifndef SHAPE_VISITOR_H
#define SHAPE_VISITOR_H

#include <sstream>

#include <cmath>
#include <cstdint>

class Circle;
class Shape;
class Square;

class ShapeVisitor
{
public:
	virtual ~ShapeVisitor() = default;

	virtual void visit(const Circle& c) = 0;
	virtual void visit(const Square& s) = 0;
};

class ShapePrinter : public ShapeVisitor
{
public:
	void visit(const Circle& c) override;
	void visit(const Square& s) override;

	void apply2(Shape& sh);

	std::ostringstream oss;
};

class ShapeAreaCalculator : public ShapeVisitor
{
public:
	void visit(const Circle& c) override;
	void visit(const Square& s) override;

	double area;
};

class ShapePerimeterCalculator : public ShapeVisitor
{
public:
	void visit(const Circle& c) override;
	void visit(const Square& s) override;

	double perimeter;
};

#endif // SHAPE_VISITOR_H
