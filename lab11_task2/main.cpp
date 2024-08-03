#include <iostream>
#include <vector>
#include <algorithm>
#include "Point.h"

using namespace std;

int main() {
    system("chcp 1251");
    vector<Point> v;

    v.push_back(Point(0, 0));
    v.push_back(Point(0, 4));
    v.push_back(Point(4, 4));
    v.push_back(Point(6, 6));
    v.push_back(Point(0, 3));

     sort(v.begin(), v.end());

    cout << "Сортировка расстоянию до начала координат  " << endl;
    for (const auto& point : v) {
        cout << point << '\n';
    }

    return 0;
}