#include "header.h"

RightTriangle::RightTriangle(double b, double h, string color, const string type) : Shape(type, color) {
    base = b;
    height = h;
}

double RightTriangle::getArea() const {
    return 0.5 * base * height;
}

double RightTriangle::getPerimeter() const {
    return base + height + hypot(base, height);
}

void RightTriangle::setDimensions(double newB, double newH) {
    base = newB;
    height = newH;
}