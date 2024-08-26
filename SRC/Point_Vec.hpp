#include <cmath>
#include <math.h>

class Vector
{
    public:
    Vector(float X, float Y)
    {
        x = X;
        y = Y;
    }
    float Length() const
    {
        return sqrt(x*x + y*y);
    }
    float LengthSqrt() const
    {
        return x*x + y*y;
    }
    Vector operator+(Vector s) const
    {
        return Vector(x+s.x, y+s.y);
    }
    Vector operator-(Vector s) const
    {
        return Vector(x-s.x, y-s.y);
    }
    Vector operator*(float s) const
    {
        return Vector(x*s, y*s);
    }
    Vector operator/(float s) const
    {
        return Vector(x/s, y/s);
    }
    float x, y;
};
