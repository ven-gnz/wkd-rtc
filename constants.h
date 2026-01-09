#pragma once

#include <cmath>
#include <cstdlib>
#include <random>
#include <iostream>
#include <limits>
#include <memory>


#include "ray.h"
#include "Vec3.h"
// #include "color.h"


inline const double infinity = std::numeric_limits<double>::infinity();
inline const double pi = 3.1415926535897932385;

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}



inline double random_double()
{
    static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    static std::mt19937 generator;
    return distribution(generator);
}

inline double random_double(double min, double max)
{
    return min + (max - min) * random_double();
}


using std::make_shared;
using std::shared_ptr;


