#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); 
    ~Rectangle(); 
    void setLength(float len);
    void setWidth(float wid); 
    float getLength() const; 
    float getWidth() const; 
    float calculateArea() const; 
};

#endif 

#include "Rectangle.h"

Rectangle::Rectangle() {
 length = 0.0; 
 width = 0.0; 
}

Rectangle::~Rectangle() {
    
}

void Rectangle::setLength(float len) {
    length = len;
}

void Rectangle::setWidth(float wid) {
    width = wid;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}

#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;

    std::cout << "Enter length of rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of rectangle: ";
    std::cin >> width;

    Rectangle rect;

    rect.setLength(length);
    rect.setWidth(width);

    std::cout << "Area of rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}
