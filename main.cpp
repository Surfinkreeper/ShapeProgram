#include "header.h"

int main() {
    vector<Shape*> Shapes;

    Shape* circle = new Circle(5.0, "Red");
    Shape* rectangle = new Rectangle(4.0, 6.0, "Red");
    Shape* square = new Square(5.0);
    Shape* rightTriangle = new RightTriangle(3.0, 4.0, "Green");
    Shapes.push_back(circle);
    Shapes.push_back(rectangle);
    Shapes.push_back(square);
    Shapes.push_back(rightTriangle);


    for(auto& shape : Shapes){
        cout << shape;
    }

    cout << "Comparing shapes:" << endl;
    if (circle == square) {
        cout << "Circle is equal to Square." << endl;
    }
    if (rectangle != rightTriangle) {
        cout << "Rectangle is not equal to Right Triangle." << endl;
    }

    return 0;
}