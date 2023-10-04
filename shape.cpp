#include "header.h"

Shape::Shape() {
    type = "Shape";
    color = "Clear";
}

Shape::Shape(const string t, string c) {
    type = t;
    color = c;
}

double Shape::getArea() const {
    return 0;
}

double Shape::getPerimeter() const {
    return 0;
}

string Shape::getType() const {
    return type;
}

string Shape::getColor() const {
    return color;
}

void Shape::setColor(string c) {
    color = c;
}

bool Shape::operator==(const Shape& other) const {
    return ((type == other.getType()) && (getArea() == other.getArea()) && (color == other.getColor()));
}

bool Shape::operator!=(const Shape& other) const {
    return !(*this == other);
}