#include "header.h"

Circle::Circle(double r, string color, const string type) : Shape(type, color) {
    radius = r;
}

double Circle::getArea() const {
    return acos(-1.0) * (radius * radius);
}

double Circle::getPerimeter() const {
    return 2 * acos(-1.0) * radius;
}

void Circle::setRadius(double newR) {
    radius = newR;
}
