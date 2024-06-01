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
// The rest of the Square class implementation remains uncha

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
// The rest of the Triangle class implementation remains unchanged.

#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

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
// The rest of the Circle class implementation remains unchanged, but use M_PI for Pi.

#ifndef AREA_H
#define AREA_H
// The Area class remains unchanged, but reconsider its necessity.
#endif 

#include "area.h"

#include <iostream>

using namespace std;
using namespace shapes;

int main() {
    int choice;
    double value;

    while (true) {
        cout << "Choose an option:" << endl;
        // Implementation for user input and program logic goes here.
    }

    return 0; // Added return statement for main function.
}