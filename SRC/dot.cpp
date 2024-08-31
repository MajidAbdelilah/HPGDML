#include "dot.hpp"

float DotProduct(const Vector2 &a, const Vector2 &b)
{
    return a.x * b.x + a.y * b.y;
}
float DotProduct(const Vector3 &a, const Vector3 &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
float DotProduct(const Vector4 &a, const Vector4 &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}
