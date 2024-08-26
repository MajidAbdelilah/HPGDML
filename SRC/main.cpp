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

    Vector v = p - i;
    std::cout << v.x << " " << v.y << std::endl;
    return 0;
}
