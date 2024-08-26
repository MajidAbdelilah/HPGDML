#include "Point_Vec.hpp"

Vector operator-(Point a, Point b)
{
    Vector v;
    v.x = a.x - b.x;
    v.y = a.y - b.y;
    return v;
}
