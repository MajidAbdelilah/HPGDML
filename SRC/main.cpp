#include "Vector.hpp"
#include "dot.hpp"
#include <iostream>

int main()
{
    Vector2 p(0, 0);
    Vector2 i(2, 0);

    Vector2 ip = p - i;
    Vector2 view(3, 0);
    Vector2 normalized = ip.Normalize();
    view = view.Normalize();
    std::cout << DotProduct(normalized, view) << std::endl;
    return 0;
}
