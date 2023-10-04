#pragma once

struct point{
    float x, y;
};

float distance(point a, point b);

/**
 * Преобразует декартовы координаты в полярные.
 */
float polar(float x, float y, float *r, float *theta);