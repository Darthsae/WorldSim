#ifndef POINT_H
#define POINT_H
#include <stdfloat>

namespace WorldSim {
    struct Point {
        float32_t x, y;

        Point();
        Point(int32_t x, int32_t y);
    };
}
#endif