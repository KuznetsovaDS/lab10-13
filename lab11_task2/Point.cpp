#include "Point.h"
#include <cmath>
using namespace std;

Point::Point(double x, double y) : x(x), y(y) {}

double Point::distance() const {
    return sqrt(x * x + y * y);
}

ostream& operator<<(ostream& os, const Point& point) {
    os <<  point.x << ", " << point.y ;
    return os;
}

bool Point::operator<(const Point& other) const {
    return distance() < other.distance();
}