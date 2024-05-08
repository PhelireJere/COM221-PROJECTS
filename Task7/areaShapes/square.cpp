#include "square.h"

namespace shapes {
    Square::Square() : sideLength(0) {}

    Square::Square(double length) : sideLength(length) {}

    double Square::getSideLength() const {
        return sideLength;
    }

    void Square::setSideLength(double length) {
        sideLength = length;
    }

    Square::~Square() {}
}
