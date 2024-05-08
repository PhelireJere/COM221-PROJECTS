#include "circle.h"

namespace shapes {
    Circle::Circle() : radius(0) {}

    Circle::Circle(double radius) : radius(radius) {}

    double Circle::getRadius() const {
        return radius;
    }

    void Circle::setRadius(double radius) {
        this->radius = radius;
    }

    Circle::~Circle() {}
}
