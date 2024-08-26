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
    Vector operator+(const Vector &s) const
    {
        return Vector(x+s.x, y+s.y);
    }
    Vector operator-(const Vector &s) const
    {
        return Vector(x-s.x, y-s.y);
    }
    Vector operator*(const float &s) const
    {
        return Vector(x*s, y*s);
    }
    Vector operator/(const float s) const
    {
        return Vector(x/s, y/s);
    }
    Vector Normalize() const
    {
        return *this / Length();
    }
    float x, y;
};
