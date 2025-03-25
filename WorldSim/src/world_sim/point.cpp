#include <world_sim/point.h>

using namespace WorldSim;

Point::Point() {
    this->x = 0;
    this->y = 0;
}

Point::Point(float x, float y) {
    this->x = x;
    this->y = y;
}