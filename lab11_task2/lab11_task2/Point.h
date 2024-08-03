#pragma once
#include <iostream>
using namespace std;
class Point {
public:
    Point(double x = 0.0, double y = 0.0);

    double distance() const;

    friend ostream& operator<<(ostream& os, const Point& point);

    bool operator<(const Point& other) const;

private:
    double x;
    double y;
};