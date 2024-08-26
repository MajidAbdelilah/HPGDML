#include "Point_Vec.hpp"
#include <iostream>

int main()
{
    Point p;
    p.x = 0;
    p.y = -1;
    Point i;
    i.x = 1;
    i.y = 1;
    Point c;
    c.x = 2;
    c.y = -1;

    Vector ip = p - i;
    Vector cp = p - c;

    // std::cout << v.x << " " << v.y << std::endl;
    std::cout << ip.LengthSqrt() << "\n";
    std::cout << cp.LengthSqrt() << "\n";

    return 0;
}
