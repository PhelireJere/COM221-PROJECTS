#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
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

#endif;

#include<iostream>
Rectangle::Rectangle(){
    length = 0.0;
    width = 0.0;
}
Rectangle:: ~Rectangle(){

}

void Rectangle :: setLength(float len){
    length = len;
}

void Rectangle :: setWidth(float wid){
    width = wid;
}

float Rectangle :: getLength() const {
    return length;
}

float Rectangle :: getWidth() const {
    return width;
}

float Rectangle :: calculateArea() const {
    return length * width;
}

#include <iostream>
int main() {
    float length,width;
    Rectangle myRectangle;

    std:: cout << "Enter the length of the rectangle: ";
    std:: cin >> length;
     
    std:: cout << "Enter the width of the rectangle: ";
    std:: cin >> width;

    myRectangle.setLength(length);
    myRectangle.setWidth(width);

    std::cout << "Area of the rectangle: " << myRectangle.calculateArea() << std::endl;

    return 0;

}

