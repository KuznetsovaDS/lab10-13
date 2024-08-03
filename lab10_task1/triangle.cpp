#include "triangle.h"
#include <cmath>
#include <iostream>
using namespace std;
Triangle::Triangle(double ax, double ay, double bx, double by, double cx, double cy)
    : a(ax, ay), b(bx, by), c(cx, cy) {}

Triangle::Triangle(Dot a, Dot b, Dot c) : a(a), b(b), c(c) {}

void Triangle::printSides()  {
    cout << "расстояние a-b " << a.distanceTo(b) << endl;
    cout << "расстояние b-c " << b.distanceTo(c) << endl;
    cout << "расстояние c-a " << c.distanceTo(a) << endl;
}
double Triangle::perimeter() {
    return a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a);
}
double Triangle::area()  {
    double ab = a.distanceTo(b);
    double bc = b.distanceTo(c);
    double ca = c.distanceTo(a);
    double s = perimeter() / 2;
    return sqrt(s * (s - ab) * (s - bc) * (s - ca));
}