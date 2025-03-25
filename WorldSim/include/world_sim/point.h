#ifndef POINT_H
#define POINT_H

namespace WorldSim {
    /**
     * @struct Point
     * @brief Represents a high resolution point using double precision.
     *
     * The Point structure represents a 3D point with high precision by using double precision.
     */
    struct Point {
        double x, y, z;

        Point();
        Point(double x, double y, double z);
    };
}
#endif