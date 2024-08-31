#include "common.hpp"
float approach(const float &goal, const float &current, const float &dt)
{
    const float diff = goal - current;
    const bool bigger = diff > dt;
    const bool lesser = diff < -dt;
    return (bigger) * (current + dt) + (lesser) * (current - dt) + (!bigger && !lesser) * goal;
}
