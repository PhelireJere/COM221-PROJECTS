#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square(); 
        Square(double length); 
        ~Square(); 
        void setSideLength(double length);
        double getSideLength() const;

        static double calculateArea(const Square& square);
    };
}

#endif 

#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle(); 
        Triangle(double b, double h); 
        ~Triangle(); 

        void setBase(double b);
        void setHeight(double h);
        double getBase() const;
        double getHeight() const;

        static double calculateArea(const Triangle& triangle);
    };
}

#endif 

#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle(); 
        Circle(double r); 
        ~Circle();

        void setRadius(double r);
        double getRadius() const;

        static double calculateArea(const Circle& circle);
    };
}

#endif 

#ifndef AREA_H
#define AREA_H

namespace shapes {
    class Area {
    public:
        static double calculateSquareArea(const Square& square);
        static double calculateTriangleArea(const Triangle& triangle);
        static double calculateCircleArea(const Circle& circle);
    };
}

#endif 

#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"

using namespace std;
using namespace shapes;

int main() {
    int choice;
    double value;

    while (true) {
        cout << "Choose an option:" << endl;
    }
   return 0;
}