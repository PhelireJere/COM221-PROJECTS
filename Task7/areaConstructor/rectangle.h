#pragma once 

using namespace std;

class Rectangle{
    private:
    float length;
    float width;

    public:
    void setWidth(float nwidth);
    void setLength(float nlength);
    float getWidth();
    float getLength();
    float calculateArea();
    Rectangle();
    Rectangle(float clength, float cwidth);
    ~Rectangle();
};