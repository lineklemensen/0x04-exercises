#include "triangleArea.h"
#include <cmath>

//Function to calculate the area of a triangle
double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}