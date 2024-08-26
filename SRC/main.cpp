#include "Vector.hpp"
#include <iostream>

int main()
{
    Vector p(0, -5);
    Vector i(4, 0);

    Vector pi = i + p;

    Vector normalized = pi;

    std::cout << normalized.x << " " << normalized.y << std::endl;
    std::cout << normalized.Length() << std::endl;
    return 0;
}
