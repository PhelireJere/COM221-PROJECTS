#include "triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0), height(0) {}

    Triangle::Triangle(double base, double height) : base(base), height(height) {}

    double Triangle::getBase() const {
        return base;
    }

    void Triangle::setBase(double base) {
        this->base = base;
    }

    double Triangle::getHeight() const {
        return height;
    }

    void Triangle::setHeight(double height) {
        this->height = height;
    }

    Triangle::~Triangle() {}
}
