#include<iostream>
#include "rectangle.h"

Rectangle :: Rectangle(){
    length = 0.0f;
    width = 0.0f;
}
void Rectangle :: setWidth(float nwidth){
    width = nwidth;
}
void Rectangle :: setLength(float nlength){
    length = nlength;
}
float Rectangle :: getWidth(){
    return width;
}
float Rectangle :: getLength(){
    return length;
}
float Rectangle :: calculateArea(){
    return length * width;
}
Rectangle :: ~Rectangle(){}
