#include <iostream>
#include "area.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"

using namespace shapes;
using namespace std;

int main() {
    char choice;
    
    do {
        cout << "Select an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double sideLength;
                cout << "Enter the side length of the square: ";
                cin >> sideLength;
                Square square(sideLength);
                cout << "Area of the square: " << Area::calculateArea(square) << endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateArea(triangle) << endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != '4');

    return 0;
}
