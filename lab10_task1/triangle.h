#pragma once
#include <iostream>
#include "dot.h"

class Triangle {
private:
    Dot a;
    Dot b;
    Dot c;

public:
    Triangle(double ax, double ay, double bx, double by, double cx, double cy);
    Triangle(Dot a, Dot b, Dot c);
    void printSides() ;

    double perimeter() ;

    double area() ;
};