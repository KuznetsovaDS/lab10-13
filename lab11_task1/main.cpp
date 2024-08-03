#include "Time.h"
#include <iostream>
using namespace std;

int main() {
    system("chcp 1251");
    Time t1(10, 20, 30);
    Time t2(2, 40, 50);

    Time sum = t1 + t2;
    Time diff = t1 - t2;
    Time addSec = t1 + 90; 
    Time addSeconds = 85 + t1; 

    cout << "����� 1 ";
    t1.display();

    cout << "����� 2 ";
    t2.display();

    cout << "����� ";
    sum.display();

    cout << "�������� ";
    diff.display();

    cout << "��������� 90 ������ ";
    addSec.display();

    cout << "��������� 85 ������ ������������� ������� ";
    addSeconds.display();

    return 0;
}