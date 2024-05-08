#pragma once
#define PI 3.14

namespace shapes {
    class Circle {
    private:
        double radius;
        
    public:
        Circle();
        Circle(double radius);
        
        double getRadius() const;
        void setRadius(double radius);

        ~Circle();
    };
}
