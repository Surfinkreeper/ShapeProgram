#ifndef HEADER_H_
#define HEADER_H_

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class Shape {
    public:
        Shape();
        Shape(const string t, string c);
        virtual ~Shape() {}

        virtual double getArea() const;
        virtual double getPerimeter() const;
        string getType() const;
        string getColor() const;

        friend ostream& operator<<(ostream& os, const Shape* shape) {
            os << "Type: " << shape->getType() << "\nColor: " << shape->getColor() << "\nArea: " << shape->getArea() << "\nPerimeter: " << shape->getPerimeter() << endl << endl;
            return os;
        }

        void setColor(string c);

        bool operator==(const Shape& other) const;
        bool operator!=(const Shape& other) const;
    private:
        string type;
        string color;
};

class Circle : public Shape {
    public:
        Circle(double r, string color = "Clear", const string type = "Circle");
        double getArea() const override;
        double getPerimeter() const override;
        void setRadius(double newR);

    private:
        double radius;
};

class Rectangle : public Shape {
    public:
        Rectangle(double w, double h, string color = "Clear", const string type = "Rectangle");
        double getArea() const override;
        double getPerimeter() const override;
        void setDimensions(double newW, double newH);
    private:
        double width;
        double height;
};

class Square : public Rectangle {
    public:
        Square(double sl, string color = "Clear", const string type = "Square");
};

class RightTriangle : public Shape {
    public:
        RightTriangle(double b, double h, string color = "Clear", const string type = "Right Triangle");
        double getArea() const override;
        double getPerimeter() const override;
        void setDimensions(double newB, double newH);
    private:
        double base;
        double height;
};

#endif