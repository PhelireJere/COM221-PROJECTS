#include<iostream>
#include "rectangle.h"

using namespace std;

int main(){
    float num1, num2, area;
    cout << "Enter width "<< endl;
    cin >> num1;
    cout << "Enter length "<< endl;
    cin >> num2;
    Rectangle rect;
    rect.setWidth(num1);
    cout << "Width: " << rect.getWidth() << endl;
    rect.setLength(num2);
    cout << "Length: " << rect.getLength() << endl;
    area = rect.calculateArea();

    cout << "Area: " << area << endl;

    return 0;
}