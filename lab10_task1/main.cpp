#include "dot.h"
#include "triangle.h"
#include <iostream>
using namespace std;
int main() {
    system("chcp 1251");
	Triangle t1(0, 0, 0, 4, 4, 0);
	cout << "Композиция " << endl;
	t1.printSides();
	cout << "Периметр " << t1.perimeter() << endl;
	cout << "Площадь " << t1.area() << endl;
    Dot a(0, 0);
    Dot b(0, 4);
    Dot c(4, 0);
    Triangle t2(a, b, c);
    cout << "\nАгрегация " << endl;
    t2.printSides();
    cout << "Периметр " << t2.perimeter() << endl;
    cout << "Площадь " << t2.area() << endl;

    return 0;
}