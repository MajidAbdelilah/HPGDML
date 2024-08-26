#include <cmath>
#include <math.h>

class Vector
{
    public:
    float Length() const
    {
        return sqrt(x*x + y*y);
    }
    float x, y;
};

class Point
{
    public:
    Point AddVector(Vector v)
    {
        Point p;
        p.x = x + v.x;
        p.y = y + v.y;
        return p;
    }
    float x, y;
};

Vector operator-(Point a, Point b);
