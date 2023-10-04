#include "header.h"

/*
class Circle : public Shape {
    public:
        Circle(double r, string color = "Clear", const string type = "Circle");
        void setRadius(double newR);

    private:
        double radius;
};
*/

Circle::Circle(double r, string color = "Clear", const string type = "Circle") : Shape(type, color) {
    radius = r;
}

double Circle::getArea() const {
    return M_PI * (radius * radius);
}

double Circle::getPerimeter() const {
    return 2 * M_PI * radius;
}

