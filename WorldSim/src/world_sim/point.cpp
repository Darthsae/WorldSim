#include <world_sim/point.h>

using namespace WorldSim;

Point::Point() {
    this->x = 0;
    this->y = 0;
}

Point::Point(int32_t x, int32_t y) {
    this->x = x;
    this->y = y;
}