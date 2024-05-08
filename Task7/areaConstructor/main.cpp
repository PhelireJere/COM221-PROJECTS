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

    float cnum1, cnum2;

    cout << "Enter new width "<< endl;
    cin >> cnum1;
    cout << "Enter new length "<< endl;
    cin >> cnum2;

    Rectangle rect2(cnum2, cnum1);
    rect2.setWidth(cnum1);
    cout << " New Width: " << rect2.getWidth() << endl;
    rect2.setLength(cnum2);
    cout << "New Length: " << rect2.getLength() << endl;

    cout << "New Area: " << rect2.calculateArea() << endl;
    
    return 0;
}