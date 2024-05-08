#pragma once

#include "square.h"
#include "triangle.h"
#include "circle.h"

namespace shapes {
    class Area {
    public:
        static double calculateArea(const Square& square);
        static double calculateArea(const Triangle& triangle);
        static double calculateArea(const Circle& circle);
    };
}
