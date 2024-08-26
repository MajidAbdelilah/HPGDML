#include "Point_Vec.hpp"
#include <iostream>

int main()
{
    Vector v(3, 4);

    std::cout << v.Length() << std::endl;

    Vector doubled = v * 2;

    std::cout << doubled.Length() << std::endl;

    Vector halved = v / 2;

    std::cout << halved.Length() << std::endl;

    return 0;
}
