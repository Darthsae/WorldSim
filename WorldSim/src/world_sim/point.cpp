#include <world_sim/point.h>

using namespace WorldSim;

Point::Point() {
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Point::Point(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}