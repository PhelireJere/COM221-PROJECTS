#include <iostream>
#include <cmath>

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    int choice;
     while(true){
        std::cout << "Please select the area of the shape to calculate:" << std::endl;
        std::cout << "1. Triangle" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Square" << std::endl;
        std::cout << "4. Quit Program" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        if (choice == 1){
            double base, height;
            std::cout << "Enter the base and the height of the triangle: ";
            std::cin >> base >> height;
            std::cout << "The area of a triangle is: " << calculateTriangleArea(base,height) << "\n";
        }
        
        else if (choice == 2){
            double length, width;
            std::cout << "Enter the length and width of the rectangle: ";
            std::cin >> length >> width;
            std::cout << "The area of a rectangle is: " << calculateRectangleArea(length,width) << "\n";
        }

        else if(choice == 3){
            double side;
            std::cout << "Enter the side of the square: ";
            std::cin >> side;
            std::cout << "The area of a square is: " << calculateSquareArea(side) << "\n";            
        }

        else if(choice == 4){
            break;
        }

        else{
            std::cout << "Invalid input. Please enter a valid choice (1-4).\n";
        }

    } 

    return 0;
}
