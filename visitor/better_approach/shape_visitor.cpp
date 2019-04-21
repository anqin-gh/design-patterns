#include <cmath>
#include <cstdint>

#include "shape.h"
#include "shape_visitor.h"

void ShapePrinter::visit(const Circle& c) { oss.str(""); oss << "circle"; }
void ShapePrinter::visit(const Square& s) { oss.str(""); oss << "square"; }
void ShapePrinter::apply2(Shape& sh) { sh.accept(*this); }


void ShapeAreaCalculator::visit(const Circle& c) { area = pow(c.getRadius(), 2) * M_PI; }
void ShapeAreaCalculator::visit(const Square& s) { area = pow(s.getSide(), 2); }

void ShapePerimeterCalculator::visit(const Circle& c) { perimeter = 2 * M_PI * c.getRadius(); }
void ShapePerimeterCalculator::visit(const Square& s) { perimeter = 4 * s.getSide(); }
