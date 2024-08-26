#include "Point_Vec.hpp"
#include <iostream>

int main()
{
    Vector p(0, -1);
    Vector i(1, 1);
    Vector c(2, -1);

    Vector ip = p - i;
    Vector cp = p - c;

    // std::cout << v.x << " " << v.y << std::endl;
    std::cout << ip.LengthSqrt() << "\n";
    std::cout << cp.LengthSqrt() << "\n";
    std::cout << ip.x << ip.y << cp.x << cp.y << "\n";
    std::cout << (ip + cp).x << (ip + cp).y << "\n";
    return 0;
}
