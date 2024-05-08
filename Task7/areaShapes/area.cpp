#include "area.h"
#include <cmath>

namespace shapes {
    double Area::calculateArea(const Square& square) {
        return square.getSideLength() * square.getSideLength();
    }

    double Area::calculateArea(const Triangle& triangle) {
        return 0.5 * triangle.getBase() * triangle.getHeight();
    }

    double Area::calculateArea(const Circle& circle) {
        return PI * circle.getRadius() * circle.getRadius();
    }
}
