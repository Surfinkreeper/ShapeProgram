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

void Shape::print() const {
    cout << "Type: " << type << "\nColor: " << color << "\nArea: " << getArea()  << "\nPerimeter: " << getPerimeter();
}

void Shape::setColor(string c) {
    color = c;
}

bool Shape::operator==(const Shape& other) const {
    return (type == other.type) && (getArea() == other.getArea()) && (color == other.color);
}

bool Shape::operator!=(const Shape& other) const {
    return !(*this == other);
}