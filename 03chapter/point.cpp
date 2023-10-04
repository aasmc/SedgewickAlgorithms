#include "point.h"
#include "math.h"

float distance(point a, point b) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

float polar(float x, float y, float *r, float *theta) {
    *r = sqrt(x * x + y * y);
    *theta = atan2(y, x);
}