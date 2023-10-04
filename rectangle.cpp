#include "header.h"

Rectangle::Rectangle(double w, double h, string color, const string type) : Shape(type, color) {
    width = w;
    height = h;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getPerimeter() const {
    return (2 * width) + (2* height);
}

void Rectangle::setDimensions(double newW, double newH) {
    width = newW;
    height = newH;
}